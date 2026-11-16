// sub_1932A10B8
// rva 0x132a10b8  size 254  section .text  group text
// window base 0x1932a10b8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A10B8(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  _QWORD v20[6]; // [rsp+0h] [rbp-208h] BYREF
  int v21; // [rsp+30h] [rbp-1D8h] BYREF
  int v22[3]; // [rsp+34h] [rbp-1D4h] BYREF
  _BYTE v23[416]; // [rsp+40h] [rbp-1C8h] BYREF
  __int64 v24; // [rsp+1E0h] [rbp-28h]

  v6 = MEMORY[0x79928](a1, a2, a3: v23, a4: 514);
  v11 = 0;
  if ( v6 == 0 )
  {
    v22[0] = 1;
    v21 = 4;
    v8 = MEMORY[0x799E8](a1: v8, a2: 0, a3: 1, a4: 23, a5: 6);
    if ( v8 != -1
      || (unsigned int)MEMORY[0x79958](a1: -1, a2: v11) - 10046 <= 1
      && (v8 = MEMORY[0x799E8](
                 a1: v8,
                 a2: v11,
                 a3: (unsigned int)(v11 + 1),
                 a4: (unsigned int)(v11 + 2),
                 a5: (unsigned int)(v11 + 6))) != -1 )
    {
      v20[4] = &v21;
      v12 = MEMORY[0x799F8](a1: v8, a2: v11, a3: a4, a4: v8, a5: a3, a6: v22);
      v15 = MEMORY[0x79958](a1: v13, a2: v14);
      if ( v12 == 0 || v15 != 10042 )
        v18 = 1;
      MEMORY[0x79A00](a1: v17, a2: v18, a3: v16, a4: v17);
      MEMORY[0x799E0]();
    }
  }
  return sub_1932C8DE0(a1: v8, a2: v11, a3: v7, a4: (unsigned __int64)v20 ^ v24, a5: v9, a6: v10);
}
