// sub_1815CC340
// rva 0x015cc340  size 331  section .text  group text
// window base 0x1815cc340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815CC340(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rbx
  int v18; // edx
  int v19; // ecx
  int v20; // edi
  int v21; // esi
  int v22; // r8d
  int v23; // r9d
  _QWORD v24[8]; // [rsp+0h] [rbp-48h] BYREF
  int v25; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)v24 <= *(_QWORD *)(v15 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815CC4A0(a1: v20, a2: v21, a3: v18, a4: v19, a5: v22, a6: v23, a7);
  }
  else
  {
    v16 = *(_QWORD *)(v15 + 40);
    if ( (unsigned __int64)(v16 + 40) > *(_QWORD *)(v15 + 32) )
    {
      return sub_1815CC3FF(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }
    else
    {
      *(_QWORD *)(v15 + 40) = v16 + 40;
      *(_DWORD *)v16 = 35319344;
      *(_DWORD *)(v16 + 4) = 0;
      *(_QWORD *)(v16 + 8) = 0;
      *(_QWORD *)(v16 + 16) = 0;
      *(_QWORD *)(v16 + 24) = 0;
      *(_QWORD *)(v16 + 32) = 0;
      *(_DWORD *)(v16 + 28) = a3;
      *(_DWORD *)(v16 + 24) = (unsigned __int64)(a8 - v14) >> 3;
      *(_DWORD *)(v16 + 20) = (unsigned __int64)(a4 - v14) >> 3;
      *(_DWORD *)(v16 + 16) = (unsigned __int64)(a2 - v14) >> 3;
      *(_DWORD *)(v16 + 12) = (unsigned __int64)(a1 - v14) >> 3;
      *(_DWORD *)(v16 + 8) = (unsigned __int64)(a6 - v14) >> 3;
      *(_DWORD *)(v16 + 4) = (unsigned __int64)(a5 - v14) >> 3;
      if ( *(int *)(v15 + 16) <= 0 )
      {
        v24[7] = a8;
        v24[6] = a4;
        v24[5] = a2;
        v24[4] = a1;
        v24[3] = a6;
        v24[2] = a5;
        v25 = a3;
        MEMORY[0x18277F280]();
      }
      return v16;
    }
  }
}
