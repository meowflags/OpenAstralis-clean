// sub_15C91C0
// rva 0x015c91c0  size 220  section .text  group text
// window base 0x1815c91c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C91C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+18h] [rbp-10h]
  __int64 v23; // [rsp+20h] [rbp-8h]

  v23 = a3;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15C92A0();
  }
  else
  {
    v22 = sub_5837940(a1, a2, a3: v8 + 35855512);
    v12 = sub_5837E40(a1: v10, a2: v11, a3: v8 + 376314584);
    v17 = *(_QWORD *)(v9 + 40);
    v18 = v17 + 24;
    if ( (unsigned __int64)(v17 + 24) > *(_QWORD *)(v9 + 32) )
    {
      return sub_1815C9276(a1: v14, a2: v15, a3: v17, a4: v13, a5: v18, a6: v16, a7, a8);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v18;
      *(_DWORD *)v17 = 35855272;
      *(_DWORD *)(v17 + 4) = 0;
      *(_QWORD *)(v17 + 8) = 0;
      *(_QWORD *)(v17 + 16) = 0;
      v19 = v22;
      *(_DWORD *)(v17 + 8) = (unsigned __int64)(v23 - v8) >> 3;
      *(_DWORD *)(v17 + 4) = (unsigned __int64)(v19 - v8) >> 3;
      v22 = v17;
      sub_94C25E0(a1: v14, a2: v15, a3: v17, a4: v17, a5: v12);
      if ( *(int *)(v9 + 16) <= 0 )
        sub_277F280();
      return v22;
    }
  }
}
