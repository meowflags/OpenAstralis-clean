// sub_1932B004C
// rva 0x132b004c  size 263  section .text  group text
// window base 0x1932b004c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B004C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax

  if ( MEMORY[0x3375EC] != 0 )
    return 0;
  v4 = 0;
  MEMORY[0x79798](a1, a2, a3, a4: 3372424);
  ++MEMORY[0x3375B4];
  if ( MEMORY[0x3375B0] == 0 )
    MEMORY[0x3375B0] = MEMORY[0x79760]();
  if ( MEMORY[0x3375EC] == 0 )
  {
    v8 = MEMORY[0x79468](a1: v6, a2: v7, a3: v5, a4: 542400);
    v6 = v8;
    if ( v8 != 0 && (int)sub_1932AF6C0(a1: v8, a2: v7, a3: v5, a4: v8) >= 0 && (int)sub_1932AF4D8(a1: v6, a2: v7) >= 0 )
    {
      MEMORY[0x3375EC] = 1;
    }
    else
    {
      v4 = 0xFFFFFFFF;
      if ( MEMORY[0x3375B8] != 0 )
      {
        MEMORY[0x79AE0](a1: v6, a2: v7, a3: v5, a4: MEMORY[0x3375B8]);
        MEMORY[0x3375B8] = 0;
      }
      if ( MEMORY[0x3375C0] != 0 )
      {
        MEMORY[0x79AE0](a1: v6, a2: v7, a3: v5, a4: MEMORY[0x3375C0]);
        MEMORY[0x3375C0] = 0;
      }
      MEMORY[0x3375C8] = 0;
      if ( v6 != 0 )
        MEMORY[0x79788](a1: v6, a2: v7, a3: v5, a4: v6);
    }
  }
  if ( --MEMORY[0x3375B4] == 0 )
    MEMORY[0x3375B0] = 0;
  MEMORY[0x796E8](a1: v6, a2: v7, a3: v5, a4: 3372424);
  return v4;
}
