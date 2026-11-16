// sub_1ED7960
// rva 0x01ed7960  size 383  section .text  group text
// window base 0x181ed7960: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED7960(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  char v29; // [rsp+0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+28h] [rbp-30h]
  __int64 v31; // [rsp+30h] [rbp-28h]
  __int64 v32; // [rsp+38h] [rbp-20h]
  __int64 v33; // [rsp+40h] [rbp-18h]
  __int64 v34; // [rsp+48h] [rbp-10h]
  unsigned int v35; // [rsp+54h] [rbp-4h]

  v34 = a3;
  v33 = a5;
  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v16 + 8) )
  {
    v35 = a6;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v29);
  }
  else if ( a3 != v15 )
  {
    v17 = *(unsigned int *)(a3 + 12);
    if ( (_DWORD)v17 == 0 )
    {
LABEL_12:
      v35 = a6;
      v18 = sub_2771080();
      goto LABEL_13;
    }
    v35 = a6;
    v18 = sub_27C6220(a1, a2, a3: v15 + 8 * v17);
    v21 = v34;
    v22 = *(unsigned int *)(v34 + 16);
    v23 = v15 + 8 * v22;
    if ( (_DWORD)v22 == 0 )
    {
LABEL_13:
      v32 = v18;
      sub_2771080(a1: v19, a2: v20, a3: v21, a4: v23);
      goto LABEL_14;
    }
    v24 = *(unsigned int *)(v15 + 8 * v22 + 8);
    v25 = v15 + 8 * v24;
    if ( (_DWORD)v24 == 0 )
    {
LABEL_14:
      sub_2771080(a1: v19, a2: v20, a3: v21, a4: v23, a5: v33, a6: v35);
      __builtin_debugtrap();
      return sub_1ED7AE0();
    }
    v26 = *(_QWORD *)(v16 + 40);
    v27 = v26 + 48;
    if ( (unsigned __int64)(v26 + 48) > *(_QWORD *)(v16 + 32) )
      return sub_181ED7A6D(
               a1: v19,
               a2: v20,
               a3: v34,
               a4: v23,
               a5: v26,
               a6: v27,
               a7,
               a8,
               a9,
               a10,
               a11,
               a12,
               a13,
               a14,
               a15);
    *(_QWORD *)(v16 + 40) = v27;
    *(_DWORD *)v26 = 40472784;
    *(_DWORD *)(v26 + 4) = 0;
    *(_QWORD *)(v26 + 8) = 0;
    *(_QWORD *)(v26 + 16) = 0;
    *(_QWORD *)(v26 + 24) = 0;
    *(_QWORD *)(v26 + 32) = 0;
    *(_QWORD *)(v26 + 40) = 0;
    v30 = v26;
    v32 = v18;
    v31 = v25;
    sub_1ED74A0(
      a1: 4294967294LL,
      a2: 0xFFFFFFFFLL,
      a3: v26,
      a4: v35,
      a5: v25,
      a6: v18,
      a7: v29,
      a8: v21,
      a9: v33,
      a10: v15);
    if ( *(int *)(v16 + 16) <= 0 )
      sub_277F280();
    return v30;
  }
  v35 = a6;
  sub_2771080();
  goto LABEL_12;
}
