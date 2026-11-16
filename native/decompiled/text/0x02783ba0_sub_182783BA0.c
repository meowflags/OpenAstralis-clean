// sub_182783BA0
// rva 0x02783ba0  size 742  section .text  group text
// window base 0x182783ba0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182783BA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // ebx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  _DWORD *v32; // rbx
  __int64 v33; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // r9
  __m128i v40; // xmm0
  __m128 v41; // xmm1
  __m128 v42; // xmm2
  __m128 v43; // xmm3
  __m128 v44; // xmm4
  __m128 v45; // xmm5
  __m128 v46; // xmm6
  __m128 v47; // xmm7
  unsigned __int64 v48; // rax
  __int64 v49; // [rsp+0h] [rbp-48h] BYREF
  __int64 v50; // [rsp+8h] [rbp-40h]
  _DWORD *v51; // [rsp+10h] [rbp-38h]
  __int64 v52; // [rsp+18h] [rbp-30h]
  __int64 v53; // [rsp+20h] [rbp-28h]
  __int64 v54; // [rsp+28h] [rbp-20h]
  unsigned int v55; // [rsp+34h] [rbp-14h]
  unsigned int v56; // [rsp+38h] [rbp-10h]
  unsigned int v57; // [rsp+3Ch] [rbp-Ch]
  unsigned int v58; // [rsp+40h] [rbp-8h]
  unsigned int v59; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v49 <= *(_QWORD *)(v9 + 8) )
  {
    v53 = a3;
    v18 = MEMORY[0x181EB84E0]();
    goto LABEL_20;
  }
  v10 = *(unsigned int *)(a3 + 8);
  v11 = v8 + 8 * v10;
  if ( (_DWORD)v10 != 0 )
    v12 = v8 + 8 * v10;
  else
    v12 = v8 + 353301280;
  v54 = v11;
  v59 = *(char *)(v12 + 12);
  v13 = *(_DWORD *)(a3 + 12);
  v53 = a3;
  v52 = v12;
  v58 = (char)v59;
  v57 = v13;
  v14 = MEMORY[0x1850132E0](a1: v12, a2, a3: 1);
  v18 = MEMORY[0x1850130C0](a1: v16, a2: v17, a3: v14, a4: v15, a5: v57);
  v21 = v58;
  v7 = v18 << v58;
  if ( ((v18 << v58) & 0x80000000) != 0 )
  {
LABEL_20:
    v56 = v18;
    v35 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v35 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v55 = v7;
      v35 = MEMORY[0x181EAA920](a1: v19, a2: v20, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v35 + 40;
      *(_DWORD *)v35 = 34082880;
      *(_DWORD *)(v35 + 4) = 0;
      *(_QWORD *)(v35 + 8) = 0;
      *(_QWORD *)(v35 + 16) = 0;
      *(_QWORD *)(v35 + 24) = 0;
      *(_QWORD *)(v35 + 32) = 0;
      v55 = v7;
    }
    *(_DWORD *)(v35 + 20) = 46923644;
    *(_DWORD *)(v35 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v35 + 12) = (unsigned __int64)(v35 - v8) >> 3;
    v51 = (_DWORD *)v35;
    MEMORY[0x18503B9A0](a1: v19, a2: v20, a3: v35, a4: v21, a5: 0);
    v48 = (unsigned __int64)v51;
    v51[2] = 46004603;
    if ( (*(_DWORD *)v48 & 2) != 0 )
      goto LABEL_24;
    while ( 1 )
    {
      v40 = sub_182769900(
              a1: v37,
              a2: v38,
              a3: (_DWORD *)v48,
              a4: v36,
              a5: (__int64)&a7,
              a6: v39,
              a7: (__m128)v40.m128i_i128,
              a8: v41,
              a9: v42,
              a10: v43,
              a11: v44,
              a12: v45,
              a13: v46,
              a14: v47);
LABEL_24:
      v36 = (v48 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v48 & 0xFFFFFFFFFFF80000LL) + ((v48 - v36) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v48 & 0xFFFFFFFFFFF80000LL) + ((v48 - v36) >> 9) + 0x38) = 0;
    }
  }
  v22 = *(_QWORD *)(v9 + 40);
  v23 = (v7 + 19LL) & 0x1FFFFFFF8LL;
  if ( v23 >= 0x20000 || (v24 = v22 + v23) > *(_QWORD *)(v9 + 32) )
  {
    v56 = v18;
    v22 = MEMORY[0x181EAA840](a1: 34082368, a2: v20, a3: 34082368, a4: v58, a5: v7);
    v18 = v56;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v24;
    *(_QWORD *)v22 = 34082368;
    *(_DWORD *)(v22 + 8) = v7;
  }
  v51 = (_DWORD *)v22;
  v50 = v8 + 373281248;
  v56 = v18;
  if ( (_BYTE)v59 != 0 )
    MEMORY[0x184FF2C40](a1: 1, a2: v20, a3: v8 + 373281248, a4: v22, a5: v22, a6: v18);
  else
    MEMORY[0x181EB4960](a1: v18, a2: 0, a3: v8 + 376351544, a4: v59, a5: 0, a6: v51);
  v26 = MEMORY[0x185011920](a1: v57, a2: v8 + 58185000, a3: v56, a4: v25, a5: v58, a6: v51);
  v28 = MEMORY[0x185011A80](a1: v52, a2: v50, a3: v26, a4: v27, a5: v58, a6: v51);
  v31 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v31 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v55 = v28;
    v31 = MEMORY[0x181EAA920](a1: v29, a2: v30, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v31 + 24;
    *(_DWORD *)v31 = 34082680;
    *(_DWORD *)(v31 + 4) = 0;
    *(_QWORD *)(v31 + 8) = 0;
    *(_QWORD *)(v31 + 16) = 0;
  }
  v32 = v51;
  *(_BYTE *)(v31 + 12) = v59;
  v33 = ((unsigned __int64)v32 - v8) >> 3;
  *(_DWORD *)(v31 + 4) = v33;
  if ( *(int *)(v9 + 16) <= 0 )
    sub_18277F280(a1: v29, a2: v30, a3: v31, a4: v33);
  return v31;
}
