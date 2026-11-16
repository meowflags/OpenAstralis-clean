// sub_1815C9C40
// rva 0x015c9c40  size 281  section .text  group text
// window base 0x1815c9c40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C9C40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r15
  __int64 v13; // rcx
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+8h] [rbp-30h]
  __int64 v23; // [rsp+10h] [rbp-28h]
  __int64 v24; // [rsp+18h] [rbp-20h]
  __int64 v25; // [rsp+20h] [rbp-18h]
  __int64 v26; // [rsp+28h] [rbp-10h]
  __int64 v27; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v12 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815C9D60(a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v20, a7);
  }
  else
  {
    v13 = *(_QWORD *)(v12 + 40);
    if ( (unsigned __int64)(v13 + 64) > *(_QWORD *)(v12 + 32) )
    {
      return sub_1815C9D08(a1, a2, a3, a4: v13, a5, a6, a7, a8, a9, a10, a11, a12);
    }
    else
    {
      *(_QWORD *)(v12 + 40) = v13 + 64;
      *(_DWORD *)v13 = 35858048;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 32) = 0;
      *(_QWORD *)(v13 + 40) = 0;
      *(_QWORD *)(v13 + 48) = 0;
      *(_QWORD *)(v13 + 56) = 0;
      v22 = v13;
      v23 = a3;
      v24 = a5;
      v25 = a6;
      v26 = a1;
      v27 = a2;
      MEMORY[0x187185CA0](a1: a6, a2: a1, a3: v13, a4: a2, a5: a3, a6: a5);
      if ( *(int *)(v12 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v22;
    }
  }
}
