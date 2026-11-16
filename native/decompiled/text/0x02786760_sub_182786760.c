// sub_182786760
// rva 0x02786760  size 473  section .text  group text
// window base 0x182786760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182786760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  _DWORD *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(_DWORD *, __int64, _DWORD *); // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  _DWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r9
  __m128 v34; // xmm0
  __m128 v35; // xmm1
  __m128 v36; // xmm2
  __m128 v37; // xmm3
  __m128 v38; // xmm4
  __m128 v39; // xmm5
  __m128 v40; // xmm6
  __m128 v41; // xmm7
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v46; // [rsp+10h] [rbp-48h]
  __int64 v47; // [rsp+18h] [rbp-40h]
  _DWORD *v48; // [rsp+20h] [rbp-38h]
  __int64 v49; // [rsp+28h] [rbp-30h]
  __int64 v50; // [rsp+30h] [rbp-28h]
  __int64 v51; // [rsp+38h] [rbp-20h]
  unsigned int v52; // [rsp+44h] [rbp-14h]
  __int64 v53; // [rsp+48h] [rbp-10h]
  __int64 v54; // [rsp+50h] [rbp-8h]

  v50 = a3;
  v49 = a5;
  if ( (unsigned __int64)&v45 <= *(_QWORD *)(v9 + 8) )
  {
    v47 = MEMORY[0x181EB84E0]();
    MEMORY[0x18503AEA0](a1: v43, a2: v44, a3: v46, a4: v42, a5: v47);
    while ( 1 )
    {
      sub_182769900(
        a1: v31,
        a2: v32,
        a3: v46,
        a4: v30,
        a5: (__int64)&a7,
        a6: v33,
        a7: v34,
        a8: v35,
        a9: v36,
        a10: v37,
        a11: v38,
        a12: v39,
        a13: v40,
        a14: v41);
      v46 = v26;
      v27 = *v48 >> 3;
      v28 = v8 + 8LL * *(unsigned int *)(v8 + 8 * v27 + 20);
      v29 = *(_DWORD *)(v8 + 8 * v27 + 44) & (0x1977u >> HIBYTE(*(_DWORD *)(v8 + 8 * v27 + 44)));
      *(double *)v34.m128_u64 = ((double (__fastcall *)(__int64, __int64, _DWORD *))(v7
                                                                                   + *(_QWORD *)(v8
                                                                                               + 8 * v27
                                                                                               + HIWORD(*(_DWORD *)(v28 + 4 * v29 + 12)))))(
                                  a1: v29,
                                  a2: v28,
                                  a3: v48);
    }
  }
  if ( a5 == v8 )
  {
    v48 = (_DWORD *)(v8 + 376653848);
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v10 + 16) > *(_QWORD *)(v9 + 32) )
    {
      v10 = MEMORY[0x181EAA920](a1, a2, a3: 40462112);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v10 + 16;
      *(_DWORD *)v10 = 40462112;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
    }
    v47 = v10;
    MEMORY[0x1815A7DA0](a1, a2, a3: v10);
    v54 = v7;
    v48 = (_DWORD *)v47;
  }
  v53 = sub_18278AC40(a1, a2, a3: 0);
  v11 = *v48 >> 3;
  v12 = (_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v11 + 20));
  v13 = *(_DWORD *)(v8 + 8 * v11 + 44) & (0x1977u >> HIBYTE(*(_DWORD *)(v8 + 8 * v11 + 44)));
  v14 = v8 + 8 * v11;
  v15 = (__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *))(v7 + *(_QWORD *)(v14 + HIWORD(v12[v13 + 3]) + 8));
  v47 = v14;
  v46 = v12;
  v52 = v13;
  v16 = v15(a1: v12, a2: v13, a3: v48);
  v51 = sub_18278ACA0(a1: v18, a2: v19, a3: v53, a4: v17, a5: v16);
  ((void (__fastcall *)(__int64, _QWORD, _DWORD *))(v7 + *(_QWORD *)(v47 + HIWORD(v46[v52 + 3]))))(
    a1: v20,
    a2: v52,
    a3: v48);
  if ( *(int *)(v9 + 16) <= 0 )
    sub_18277F280(a1: v23, a2: v24, a3: v21, a4: v22);
  return v51;
}
