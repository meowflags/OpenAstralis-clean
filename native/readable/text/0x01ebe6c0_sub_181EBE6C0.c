// sub_1EBE6C0
// rva 0x01ebe6c0  size 377  section .text  group text
// window base 0x181ebe6c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBE6C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // ebp
  __int64 v11; // rsi
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r8
  char v24; // [rsp+0h] [rbp-38h] BYREF
  __int64 v25; // [rsp+8h] [rbp-30h]
  _DWORD *v26; // [rsp+10h] [rbp-28h]
  __int64 v27; // [rsp+18h] [rbp-20h]
  __int64 v28; // [rsp+20h] [rbp-18h]
  __int64 v29; // [rsp+28h] [rbp-10h]
  unsigned int v30; // [rsp+34h] [rbp-4h]

  v26 = (_DWORD *)a3;
  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v7 + 8) )
  {
    v29 = a1;
    v28 = a6;
    v27 = a5;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v24);
LABEL_14:
    sub_2771080(a1: v29, a2: v15, a3: v16, a4: v25, a5: v27, a6: v28);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EBE840(a1: v21, a2: v22, a3: v19, a4: v20, a5: v23);
  }
  v8 = *(_QWORD *)(v7 + 40);
  v9 = *(_QWORD *)(v7 + 32);
  v10 = a5 - a6;
  v11 = (unsigned int)(a5 - a6) >> 3;
  v12 = (8 * v11 + 39) & 0x1FFFFFFF8LL;
  if ( v12 >= 0x20000 || (v13 = v8 + v12) > v9 )
  {
    v30 = a5 - a6;
    v29 = a1;
    v28 = a6;
    v27 = a5;
    v14 = sub_1EAAAC0(a1, a2: v11, a3: 40462360, a4: v9, a5: v11);
    v10 = v30;
    a1 = v29;
    a6 = v28;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v13;
    *(_QWORD *)v8 = 40462360;
    *(_DWORD *)(v8 + 8) = v11;
    v14 = v8;
    *(_QWORD *)(v8 + 16) = 0;
    v27 = a5;
  }
  v29 = a1;
  v30 = v10;
  v28 = a6;
  v25 = v14;
  sub_1EBE840(a1: v10, a2: a6, a3: v14, a4: v14, a5: a1);
  v16 = (unsigned __int64)v26;
  if ( v26 == v6 )
    goto LABEL_14;
  v26[7] = (unsigned __int64)(v25 - (_QWORD)v6) >> 3;
  if ( (*(_DWORD *)v16 & 2) != 0 )
  {
    v18 = (v16 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v18) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v18) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
  return 0;
}
