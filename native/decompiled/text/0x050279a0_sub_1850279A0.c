// sub_1850279A0
// rva 0x050279a0  size 237  section .text  group text
// window base 0x1850279a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850279A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+10h] [rbp-28h]
  __int64 v18; // [rsp+18h] [rbp-20h]
  __int64 v19; // [rsp+20h] [rbp-18h]
  __int64 v20; // [rsp+28h] [rbp-10h]
  __int64 v21; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v13 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_185027AA0();
  }
  else
  {
    v14 = *(_QWORD *)(v13 + 40);
    if ( (unsigned __int64)(v14 + 48) > *(_QWORD *)(v13 + 32) )
    {
      return sub_185027A4C(a1, a2: v14, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }
    else
    {
      *(_QWORD *)(v13 + 40) = v14 + 48;
      *(_DWORD *)v14 = 40305336;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      *(_QWORD *)(v14 + 32) = 0;
      *(_QWORD *)(v14 + 40) = 0;
      v18 = a3;
      v17 = v14;
      v19 = a5;
      v20 = a6;
      v21 = a1;
      MEMORY[0x184F9E240](a1: a6, a2: a1, a3: v14, a4: v19, a5: v12, a6: v19);
      if ( *(int *)(v13 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v17;
    }
  }
}
