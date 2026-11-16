// sub_15C6960
// rva 0x015c6960  size 220  section .text  group text
// window base 0x1815c6960: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C6960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // edi
  int v11; // esi
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+10h] [rbp-18h]
  __int64 v22; // [rsp+18h] [rbp-10h]
  __int64 v23; // [rsp+20h] [rbp-8h]

  v23 = a3;
  v22 = a5;
  v21 = a6;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15C6A40();
  }
  else
  {
    v9 = sub_01C8A0();
    v14 = *(_QWORD *)(v8 + 40);
    v15 = v14 + 32;
    if ( (unsigned __int64)(v14 + 32) > *(_QWORD *)(v8 + 32) )
    {
      return sub_1815C6A12(a1: v10, a2: v11, a3: v14, a4: v15, a5: v12, a6: v13, a7);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v15;
      *(_DWORD *)v14 = 34173616;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      v16 = v21;
      v17 = v22;
      v18 = v23;
      *(_DWORD *)(v14 + 16) = (unsigned __int64)(v9 - v7) >> 3;
      *(_DWORD *)(v14 + 12) = (unsigned __int64)(v16 - v7) >> 3;
      *(_DWORD *)(v14 + 8) = (unsigned __int64)(v17 - v7) >> 3;
      *(_DWORD *)(v14 + 4) = (unsigned __int64)(v18 - v7) >> 3;
      if ( *(int *)(v8 + 16) <= 0 )
        sub_277F280();
      return v14;
    }
  }
}
