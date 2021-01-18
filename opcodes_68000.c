#define FILE void
#include "defines.h"
struct optcode opt_table[] = {

  { "ILLEGAL", 0x4afc, 0, 0, 0, 0 },
  
  { "MOVEQ #x,D0", 0x70, 1, 0, 0, 0 },
  { "MOVEQ #x,D1", 0x72, 1, 0, 0, 0 },
  { "MOVEQ #x,D2", 0x74, 1, 0, 0, 0 },
  { "MOVEQ #x,D3", 0x76, 1, 0, 0, 0 },
  { "MOVEQ #x,D4", 0x78, 1, 0, 0, 0 },
  { "MOVEQ #x,D5", 0x7a, 1, 0, 0, 0 },
  { "MOVEQ #x,D6", 0x7c, 1, 0, 0, 0 },
  { "MOVEQ #x,D7", 0x7e, 1, 0, 0, 0 },
  
  { "NOP", 0x4e71, 0, 0, 0, 0 },
  
  { "RESET", 0x4e70, 0, 0, 0, 1 },

  /* returns */
  { "RTE", 0x4e73, 0, 0, 0, 1 },
  { "RTR", 0x4e77, 0, 0, 0, 0 },
  { "RTS", 0x4e75, 0, 0, 0, 0 },
  
  { "STOP", 0x4e72, 2, 0, 0, 1 },
  
  { "SWAP D0", 0x4840, 0, 0, 0, 0 },
  { "SWAP D1", 0x4841, 0, 0, 0, 0 },
  { "SWAP D2", 0x4842, 0, 0, 0, 0 },
  { "SWAP D3", 0x4843, 0, 0, 0, 0 },
  { "SWAP D4", 0x4844, 0, 0, 0, 0 },
  { "SWAP D5", 0x4845, 0, 0, 0, 0 },
  { "SWAP D6", 0x4846, 0, 0, 0, 0 },
  { "SWAP D7", 0x4847, 0, 0, 0, 0 },
  
  { "TRAP #*", 0x4e40, 3, 0, 0, 0},
  { "TRAPV", 0x4e76, 0, 0, 0, 0},
  
  { "UNLK A0", 0x4e58, 0, 0, 0, 0 },
  { "UNLK A1", 0x4e59, 0, 0, 0, 0 },
  { "UNLK A2", 0x4e5a, 0, 0, 0, 0 },
  { "UNLK A3", 0x4e5b, 0, 0, 0, 0 },
  { "UNLK A4", 0x4e5c, 0, 0, 0, 0 },
  { "UNLK A5", 0x4e5d, 0, 0, 0, 0 },
  { "UNLK A6", 0x4e5e, 0, 0, 0, 0 },
  { "UNLK A7", 0x4e5f, 0, 0, 0, 0 },

  { "E", 0x100, 0xFF, 0, 0, 0 }
};
