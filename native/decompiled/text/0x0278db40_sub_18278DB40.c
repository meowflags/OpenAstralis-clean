// sub_18278DB40
// rva 0x0278db40  size 823  section .text  group text
// window base 0x18278db40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_18278DB40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  __int64 v15; // r14
  __int64 v16; // r15
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  double v22; // xmm0_8
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r9
  __m128 v30; // xmm0
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  __m128 v33; // xmm3
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  __m128 v36; // xmm6
  __m128 v37; // xmm7
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int64 v42; // r9
  int v43; // edx
  int v44; // ecx
  int v45; // edi
  int v46; // esi
  int v47; // r8d
  int v48; // r9d
  char v49; // [rsp+0h] [rbp-38h] BYREF
  __int64 v50; // [rsp+8h] [rbp-30h]
  __int64 v51; // [rsp+10h] [rbp-28h]
  __int64 v52; // [rsp+18h] [rbp-20h]
  __int64 v53; // [rsp+20h] [rbp-18h]
  int v54; // [rsp+2Ch] [rbp-Ch]
  unsigned int v55; // [rsp+30h] [rbp-8h]
  unsigned int v56; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v49 <= *(_QWORD *)(v16 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( *(int *)(a3 + 32) >= 55 )
  {
    if ( *(int *)(v16 + 16) <= 0 )
      sub_18277F280(a1, a2, a3, a4);
    return;
  }
  if ( a5 != v15 )
  {
    v53 = a3;
    v17 = *(char *)(a5 + 16);
    v52 = a5;
    v56 = v17;
    v18 = MEMORY[0x1850130C0](a1, a2, a3: 49, a4, a5: v17);
    if ( (v18 & 0x80000000) != 0 )
      goto LABEL_16;
    v23 = *(_QWORD *)(v16 + 40);
    v24 = (v18 + 19LL) & 0x1FFFFFFF8LL;
    if ( v24 >= 0x20000 || (v42 = v23 + v24) > *(_QWORD *)(v16 + 32) )
    {
      v55 = v18;
      v23 = MEMORY[0x181EAA840](a1: 34082368, a2: v21, a3: 34082368, a4: v19, a5: v18);
      v18 = v55;
    }
    else
    {
      *(_QWORD *)(v16 + 40) = v42;
      *(_QWORD *)v23 = 34082368;
      *(_DWORD *)(v23 + 8) = v18;
    }
    v51 = v23;
    v55 = v18;
    MEMORY[0x181EB4960](a1: v18, a2: 0, a3: v15 + 376351544, a4: v23, a5: 0, a6: v23);
    v26 = MEMORY[0x185011920](a1: v56, a2: v15 + 58185168, a3: v55, a4: v25, a5: 0, a6: v51);
    v38 = *(_QWORD *)(v16 + 40);
    if ( (unsigned __int64)(v38 + 40) > *(_QWORD *)(v16 + 32) )
    {
      v54 = v26;
      v38 = MEMORY[0x181EAA920](a1: v27, a2: v28, a3: 40470128);
      v26 = v54;
    }
    else
    {
      *(_QWORD *)(v16 + 40) = v38 + 40;
      *(_DWORD *)v38 = 40470128;
      *(_DWORD *)(v38 + 4) = 0;
      *(_QWORD *)(v38 + 8) = 0;
      *(_QWORD *)(v38 + 16) = 0;
      *(_QWORD *)(v38 + 24) = 0;
      *(_QWORD *)(v38 + 32) = 0;
    }
    *(_DWORD *)(v38 + 20) = 46923644;
    *(_DWORD *)(v38 + 16) = *(_DWORD *)(v15 + 374343896);
    *(_DWORD *)(v38 + 12) = (unsigned __int64)(v38 - v15) >> 3;
    v39 = *(_QWORD *)(v16 + 40);
    v40 = v39 + 24;
    if ( (unsigned __int64)(v39 + 24) > *(_QWORD *)(v16 + 32) )
    {
      v50 = v38;
      v54 = v26;
      v39 = MEMORY[0x181EAA920](a1: v27, a2: v28, a3: 34082680);
      v38 = v50;
    }
    else
    {
      *(_QWORD *)(v16 + 40) = v40;
      *(_DWORD *)v39 = 34082680;
      *(_DWORD *)(v39 + 4) = 0;
      *(_QWORD *)(v39 + 8) = 0;
      *(_QWORD *)(v39 + 16) = 0;
    }
    *(_DWORD *)(v39 + 4) = (unsigned __int64)(v51 - v15) >> 3;
    *(_DWORD *)(v38 + 8) = (unsigned __int64)(v39 - v15) >> 3;
    if ( (*(_DWORD *)v38 & 2) != 0 )
    {
      v40 = (v38 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v38 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v38 - v40) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v38 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v38 - v40) >> 9) + 0x38) = 0;
    }
    while ( 1 )
    {
      *(_QWORD *)&v22 = sub_182769900(
                          a1: v27,
                          a2: v28,
                          a3: (_DWORD *)v38,
                          a4: v40,
                          a5: (__int64)&a15,
                          a6: v29,
                          a7: v30,
                          a8: v31,
                          a9: v32,
                          a10: v33,
                          a11: v34,
                          a12: v35,
                          a13: v36,
                          a14: v37).m128i_u64[0];
LABEL_16:
      v55 = v18;
      v41 = *(_QWORD *)(v16 + 40);
      if ( (unsigned __int64)(v41 + 40) > *(_QWORD *)(v16 + 32) )
      {
        v41 = MEMORY[0x181EAA920](a1: v20, a2: v21, a3: 34082880, a4: v22);
      }
      else
      {
        *(_QWORD *)(v16 + 40) = v41 + 40;
        *(_DWORD *)v41 = 34082880;
        *(_DWORD *)(v41 + 4) = 0;
        *(_QWORD *)(v41 + 8) = 0;
        *(_QWORD *)(v41 + 16) = 0;
        *(_QWORD *)(v41 + 24) = 0;
        *(_QWORD *)(v41 + 32) = 0;
      }
      *(_DWORD *)(v41 + 20) = 46923644;
      *(_DWORD *)(v41 + 16) = *(_DWORD *)(v15 + 374343896);
      *(_DWORD *)(v41 + 12) = (unsigned __int64)(v41 - v15) >> 3;
      v51 = v41;
      MEMORY[0x18503B9A0](a1: v20, a2: v21, a3: v41, a4: v19, a5: 0, a6: v22);
      v38 = v51;
      *(_DWORD *)(v51 + 8) = 46004603;
      if ( (*(_DWORD *)v38 & 2) != 0 )
      {
        v40 = (v38 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v38 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v38 - v40) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v38 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v38 - v40) >> 9) + 0x38) = 0;
      }
    }
  }
  sub_182771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v49);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  sub_18278DE80(a1: v45, a2: v46, a3: v43, a4: v44, a5: v47, a6: v48, a7: a15);
}
