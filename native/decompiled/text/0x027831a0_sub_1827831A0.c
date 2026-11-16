// sub_1827831A0
// rva 0x027831a0  size 232  section .text  group text
// window base 0x1827831a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827831A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r9
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __m128 v24; // xmm6
  __m128 v25; // xmm7
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  _DWORD *v29; // [rsp+10h] [rbp-18h]
  __int64 v30; // [rsp+20h] [rbp-8h]
  __int64 v31; // [rsp+20h] [rbp-8h]

  sub_182780F80();
  *(_DWORD *)(v8 + 336) |= 4u;
  if ( *(int *)(v8 + 336) < 1 )
  {
    v26 = MEMORY[0x1828C1C40](a1: v9, a2: v10, a3: v7 + 368616744);
    while ( 1 )
    {
      v29 = (_DWORD *)v26;
      sub_182781380(a1: v27, a2: v28);
      sub_182769900(
        a1: v15,
        a2: v16,
        a3: v29,
        a4: v14,
        a5: (__int64)&a7,
        a6: v17,
        a7: v18,
        a8: v19,
        a9: v20,
        a10: v21,
        a11: v22,
        a12: v23,
        a13: v24,
        a14: v25);
    }
  }
  v11 = *(_QWORD *)(v7 + 376178832);
  if ( v11 != 0 )
  {
    v12 = *(_QWORD *)(v11 + 256);
    if ( v11 != v8 && *(_BYTE *)(v11 + 248) == 0 )
    {
      v31 = *(_QWORD *)(v11 + 256);
      sub_1827832E0(a1: v9, a2: v10, a3: v7 + 376658176, a4: v12, a5: v11);
      v12 = v31;
    }
    while ( v12 != 0 )
    {
      if ( v12 == v8 )
      {
        v12 = *(_QWORD *)(v12 + 256);
      }
      else if ( *(_BYTE *)(v12 + 248) != 0 )
      {
        v12 = *(_QWORD *)(v12 + 256);
      }
      else
      {
        v30 = *(_QWORD *)(v12 + 256);
        sub_1827832E0(a1: v9, a2: v10, a3: v7 + 376658176, a4: v12, a5: v12);
        v12 = v30;
      }
    }
  }
  return sub_182781380(a1: v9, a2: v10);
}
