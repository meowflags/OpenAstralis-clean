// sub_2765740
// rva 0x02765740  size 505  section .text  group text
// window base 0x182765740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2765740(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char *a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int64 i; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  char v23; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+10h] [rbp-28h]
  char *v25; // [rsp+18h] [rbp-20h]
  __int64 v26; // [rsp+20h] [rbp-18h]
  __int64 v27; // [rsp+28h] [rbp-10h]
  int v28; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v13 + 8) )
  {
    v27 = a1;
    v26 = a6;
    v25 = a5;
    v28 = a3;
    sub_1EB84E0();
  }
  else if ( a3 >= 0 )
  {
    v14 = *(_QWORD *)(v13 + 40);
    v15 = (4LL * (unsigned int)a3 + 19) & 0x7FFFFFFF8LL;
    if ( v15 >= 0x20000 )
      return sub_18276586B(a1, a2, a3, a4: 34085384, (_DWORD)a5, a6, a7, a8, a9, a10, a11, a12);
    a2 = v14 + v15;
    if ( v14 + v15 > *(_QWORD *)(v13 + 32) )
      return sub_18276586B(a1, a2, a3, a4: 34085384, (_DWORD)a5, a6, a7, a8, a9, a10, a11, a12);
    *(_QWORD *)(v13 + 40) = a2;
    *(_QWORD *)v14 = 34085384;
    *(_DWORD *)(v14 + 8) = a3;
    *(_DWORD *)(v14 + 12) = 0;
    if ( v15 - 16 >= 0x800 )
    {
      v27 = a1;
      v26 = a6;
      v25 = a5;
      v28 = a3;
      memset((void *)(v14 + 16), 0, v15 - 16);
      a1 = v27;
    }
    else
    {
      for ( i = 16; v15 > i; i += 8LL )
        *(_QWORD *)(v14 + i) = 0;
    }
    v17 = *(_QWORD *)(v13 + 40);
    if ( v17 + 24 > *(_QWORD *)(v13 + 32) )
    {
      v24 = v14;
      v27 = a1;
      v26 = a6;
      v25 = a5;
      v28 = a3;
      v17 = sub_1EAA920(a1, a2, a3: 40540392);
      v14 = v24;
      a1 = v27;
      a6 = v26;
      a5 = v25;
    }
    else
    {
      *(_QWORD *)(v13 + 40) = v17 + 24;
      *(_DWORD *)v17 = 40540392;
      *(_DWORD *)(v17 + 4) = 0;
      *(_QWORD *)(v17 + 8) = 0;
      *(_QWORD *)(v17 + 16) = 0;
      v28 = a3;
    }
    *(_DWORD *)(v17 + 12) = (unsigned __int64)(a1 - v12) >> 3;
    *(_DWORD *)(v17 + 8) = (unsigned __int64)(a6 - v12) >> 3;
    v18 = (unsigned __int64)&a5[-v12] >> 3;
    *(_DWORD *)(v17 + 4) = v18;
    v26 = a6;
    v27 = a1;
    v25 = a5;
    result = sub_27646A0(a1: v17, a2, a3: v14, a4: v18, a5, a6: 99);
    if ( *(int *)(v13 + 16) <= 0 )
      return sub_277F280(a1: v21, a2: v22, a3: v20);
    return result;
  }
  sub_2770E80(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v23);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_2765940();
}
