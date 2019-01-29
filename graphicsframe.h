// Full-frame bitmap graphic

// Blinking Eyes
const byte frame0[5][16] PROGMEM = 
{
  {0,1,1,1,1,1,1,0,0,1,1,1,1,1,1,0},
  {1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1},
  {1,0,0,0,1,0,1,0,0,1,0,0,0,1,0,1},
  {1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1},
  {0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,0}
};

const byte frame1[5][16] PROGMEM =
{
  {0,1,1,1,1,1,1,0,0,1,1,1,1,1,1,0},
  {1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1},
  {1,0,1,0,0,0,1,0,0,1,0,1,0,0,0,1},
  {1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1},
  {0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,0}
};

const byte frame2[5][16] PROGMEM =
{
  {0,1,1,1,1,1,1,0,0,1,1,1,1,1,1,0},
  {1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1},
  {1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1},
  {1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1},
  {0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,0}
};
const byte frame3[5][16] PROGMEM =
{
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0},
  {0,0,1,0,1,0,0,0,0,0,0,1,0,1,0,0},
  {0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

const byte * const frameArray[] PROGMEM = {
  frame0[0],
  frame1[0],
  frame2[0],
  frame3[0]
};
/*
{
{0b00000000, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
{0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
{0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000000, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
{0b00000000, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
{0b00000000, 0b00000000, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000}
};
*/

