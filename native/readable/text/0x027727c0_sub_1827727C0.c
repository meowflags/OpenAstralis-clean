// sub_27727C0
// rva 0x027727c0  size 645  section .text  group text
// window base 0x1827727c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27727C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        int a17,
        __int64 a18)
{
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 i; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r10
  __int64 v28; // rbx

  v19 = *(_QWORD *)(a3 + 88);
  if ( v19 != 0 )
  {
    v20 = *(_QWORD *)a3;
    v21 = *(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    v22 = v21 + v19;
    v23 = a3 + 40;
    if ( (*(_QWORD *)(a3 + 40) & 2) != 0 )
    {
      for ( i = *(_QWORD *)(a3 + 8); i != 0 && v22 > *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 24) )
        ;
      return sub_18277291A(a1: v23, a2: v22, a3, a4: v20, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
    }
    else
    {
      v26 = *(_QWORD *)(a3 + 72);
      v27 = *(_QWORD *)(v18 + 373390496);
      if ( v27 > v26 || v26 > v27 + *(int *)(v18 + 373390492) )
      {
        return sub_182772981(
                 a1: v23,
                 a2: v22,
                 a3,
                 a4: v20,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13,
                 a14,
                 a15,
                 a16,
                 a17,
                 a18);
      }
      else
      {
        v28 = 16LL * (unsigned __int8)HIBYTE(*(_QWORD *)(v22 + -(int)v21));
        sub_27722C0(a1: v23, a2: v22, a3: a3 + 40, a4: v20, a5: v28 + v22, a6: *(_QWORD *)(v22 + v28 - 8));
        return 1;
      }
    }
  }
  else
  {
    *(_QWORD *)(a3 + 88) = 0;
    *(_QWORD *)(a3 + 72) = 0;
    *(_QWORD *)(a3 + 80) = 0;
    *(_BYTE *)(a3 + 96) = 0;
    *(_QWORD *)(a3 + 40) = 0;
    *(_QWORD *)(a3 + 48) = 0;
    *(_QWORD *)(a3 + 64) = -1;
    *(_QWORD *)(a3 + 56) = -1;
    return 0;
  }
}
