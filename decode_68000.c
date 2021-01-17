
case 0:
for ( ; x < OP_SIZE_MAX; inz++, x++) {
  if (opt_tmp->op[x] == 0 && buffer[inz] == 0x0A) {
    output_assembled_opcode(opt_tmp, "d%d d%d ", (opt_tmp->hex >> 8) & 0xFF, opt_tmp->hex & 0xFF);
    i = inz;
    return SUCCEEDED;
  }
  if (opt_tmp->op[x] != toupper((int)buffer[inz]))
    break;
 }
break;

case 1:
for ( ; x < OP_SIZE_MAX; inz++, x++) {
  if (opt_tmp->op[x] == '?') {
    y = i;
    i = inz;
    z = input_number();
    inz = i;
    i = y;
    if (!(z == SUCCEEDED || z == INPUT_NUMBER_STACK))
      return FAILED;
    if (z == SUCCEEDED && (d > 65535 || d < -32768)) {
      print_error("Out of 16-bit range.\n", ERROR_NUM);
      return FAILED;
    }

    for (x++ ; x < OP_SIZE_MAX; inz++, x++) {
      if (opt_tmp->op[x] == 0 && buffer[inz] == 0x0A) {
        if (z == SUCCEEDED)
          output_assembled_opcode(opt_tmp, "d%d d%d y%d ", (opt_tmp->hex >> 8) & 0xFF, opt_tmp->hex & 0xFF, d);
        else
          output_assembled_opcode(opt_tmp, "d%d d%d C%d ", (opt_tmp->hex >> 8) & 0xFF, opt_tmp->hex & 0xFF, latest_stack);
        i = inz;
        return SUCCEEDED;
      }
      if (opt_tmp->op[x] != toupper((int)buffer[inz]))
        break;
    }
  }
  if (opt_tmp->op[x] != toupper((int)buffer[inz]))
    break;
 }
break;
