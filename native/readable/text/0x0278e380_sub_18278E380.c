// sub_278E380
// rva 0x0278e380  size 971  section .text  group text
// window base 0x18278e380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278E380(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
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
  __int64 result; // rax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  unsigned __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r9
  __m128 v29; // xmm0
  __m128 v30; // xmm1
  __m128 v31; // xmm2
  __m128 v32; // xmm3
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  __m128 v35; // xmm6
  __m128 v36; // xmm7
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rdx
  unsigned __int64 v41; // r9
  char v42; // [rsp+0h] [rbp-48h] BYREF
  __int64 v43; // [rsp+10h] [rbp-38h]
  __int64 v44; // [rsp+18h] [rbp-30h]
  __int64 v45; // [rsp+20h] [rbp-28h]
  __int64 v46; // [rsp+28h] [rbp-20h]
  unsigned __int64 v47; // [rsp+30h] [rbp-18h]
  int v48; // [rsp+3Ch] [rbp-Ch]
  unsigned int v49; // [rsp+40h] [rbp-8h]
  unsigned int v50; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v42 <= *(_QWORD *)(v16 + 8) )
  {
    v45 = a6;
    sub_1EB84E0();
  }
  else
  {
    v47 = a3;
    v46 = a5;
    if ( v15 + 376670368 == a5 || v15 + 376670400 == a5 )
    {
      if ( *(int *)(a3 + 32) < 53 )
      {
        v45 = a6;
        result = a3;
      }
      else
      {
        if ( a6 == v15 )
        {
          while ( 1 )
          {
            v18 = sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v42);
LABEL_25:
            v49 = v18;
            v40 = *(_QWORD *)(v16 + 40);
            if ( (unsigned __int64)(v40 + 40) > *(_QWORD *)(v16 + 32) )
            {
              v40 = sub_1EAA920(a1: v20, a2: v21, a3: 34082880);
            }
            else
            {
              *(_QWORD *)(v16 + 40) = v40 + 40;
              *(_DWORD *)v40 = 34082880;
              *(_DWORD *)(v40 + 4) = 0;
              *(_QWORD *)(v40 + 8) = 0;
              *(_QWORD *)(v40 + 16) = 0;
              *(_QWORD *)(v40 + 24) = 0;
              *(_QWORD *)(v40 + 32) = 0;
            }
            *(_DWORD *)(v40 + 20) = 46923644;
            *(_DWORD *)(v40 + 16) = *(_DWORD *)(v15 + 374343896);
            *(_DWORD *)(v40 + 12) = (unsigned __int64)(v40 - v15) >> 3;
            v44 = v40;
            sub_503B9A0(a1: v20, a2: v21, a3: v40, a4: v19, a5: 0);
            v37 = v44;
            *(_DWORD *)(v44 + 8) = 46004603;
            if ( (*(_DWORD *)v37 & 2) != 0 )
            {
              v39 = (v37 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v37 - v39) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v37 - v39) >> 9) + 0x38) = 0;
            }
LABEL_23:
            a7.m128_i128 = (__int128)sub_2769900(
                                       a1: v26,
                                       a2: v27,
                                       a3: (_DWORD *)v37,
                                       a4: v39,
                                       a5: (__int64)&a15,
                                       a6: v28,
                                       a7: v29,
                                       a8: v30,
                                       a9: v31,
                                       a10: v32,
                                       a11: v33,
                                       a12: v34,
                                       a13: v35,
                                       a14: v36);
          }
        }
        v45 = a6;
        sub_27B6940(a1, a2, a3: a6);
        result = v47;
        *(_DWORD *)(v47 + 20) = (unsigned __int64)(v46 - v15) >> 3;
        a3 = *(unsigned int *)result;
        if ( (a3 & 2) != 0 )
        {
          a4 = result & 0xFFFFFFFFFFF80000LL;
          a3 = (result - ((result & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
          if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + a3 + 0x38) != 0 )
            *(_BYTE *)(a4 + a3 + 56) = 0;
        }
      }
      if ( *(int *)(v16 + 16) <= 0 )
        return sub_277F280(a1, a2, a3, a4);
      return result;
    }
  }
  v45 = a6;
  if ( a5 != v15 )
  {
    v50 = *(char *)(a5 + 16);
    v18 = sub_50130C0(a1, a2, a3: 21, a4, a5: v50);
    if ( (v18 & 0x80000000) != 0 )
      goto LABEL_25;
    v22 = *(_QWORD *)(v16 + 40);
    v23 = (v18 + 19LL) & 0x1FFFFFFF8LL;
    if ( v23 >= 0x20000 || (v41 = v22 + v23) > *(_QWORD *)(v16 + 32) )
    {
      v49 = v18;
      v22 = sub_1EAA840(a1: 34082368, a2: v21, a3: 34082368, a4: v19, a5: v18);
      v18 = v49;
    }
    else
    {
      *(_QWORD *)(v16 + 40) = v41;
      *(_QWORD *)v22 = 34082368;
      *(_DWORD *)(v22 + 8) = v18;
    }
    v44 = v22;
    v49 = v18;
    sub_1EB4960(a1: v18, a2: 0, a3: v15 + 376351544, a4: v22, a5: 0, a6: v22);
    v25 = sub_5011920(a1: v50, a2: v15 + 58185216, a3: v49, a4: v24, a5: 0, a6: v44);
    v37 = *(_QWORD *)(v16 + 40);
    if ( (unsigned __int64)(v37 + 40) > *(_QWORD *)(v16 + 32) )
    {
      v48 = v25;
      v37 = sub_1EAA920(a1: v26, a2: v27, a3: 40470128);
      v25 = v48;
    }
    else
    {
      *(_QWORD *)(v16 + 40) = v37 + 40;
      *(_DWORD *)v37 = 40470128;
      *(_DWORD *)(v37 + 4) = 0;
      *(_QWORD *)(v37 + 8) = 0;
      *(_QWORD *)(v37 + 16) = 0;
      *(_QWORD *)(v37 + 24) = 0;
      *(_QWORD *)(v37 + 32) = 0;
    }
    *(_DWORD *)(v37 + 20) = 46923644;
    *(_DWORD *)(v37 + 16) = *(_DWORD *)(v15 + 374343896);
    *(_DWORD *)(v37 + 12) = (unsigned __int64)(v37 - v15) >> 3;
    v38 = *(_QWORD *)(v16 + 40);
    v39 = v38 + 24;
    if ( (unsigned __int64)(v38 + 24) > *(_QWORD *)(v16 + 32) )
    {
      v43 = v37;
      v48 = v25;
      v38 = sub_1EAA920(a1: v26, a2: v27, a3: 34082680);
      v37 = v43;
    }
    else
    {
      *(_QWORD *)(v16 + 40) = v39;
      *(_DWORD *)v38 = 34082680;
      *(_DWORD *)(v38 + 4) = 0;
      *(_QWORD *)(v38 + 8) = 0;
      *(_QWORD *)(v38 + 16) = 0;
    }
    *(_DWORD *)(v38 + 4) = (unsigned __int64)(v44 - v15) >> 3;
    *(_DWORD *)(v37 + 8) = (unsigned __int64)(v38 - v15) >> 3;
    if ( (*(_DWORD *)v37 & 2) != 0 )
    {
      v39 = (v37 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v37 - v39) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v37 - v39) >> 9) + 0x38) = 0;
    }
    goto LABEL_23;
  }
  sub_2771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v42);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_278E760();
}
