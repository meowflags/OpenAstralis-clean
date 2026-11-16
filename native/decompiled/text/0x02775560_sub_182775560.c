// sub_182775560
// rva 0x02775560  size 1540  section .text  group text
// window base 0x182775560: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182775560(
        _DWORD *a1,
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
  _DWORD *v15; // r14
  __int64 v16; // r15
  int v17; // eax
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rdx
  BOOL v26; // esi
  __int64 result; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  unsigned int v30; // eax
  __int64 v31; // rbp
  __int64 v32; // r10
  __int64 v33; // rbp
  __int64 v34; // r10
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  _DWORD *v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __m128 v42; // xmm0
  __m128 v43; // xmm1
  __m128 v44; // xmm2
  __m128 v45; // xmm3
  __m128 v46; // xmm4
  __m128 v47; // xmm5
  __m128 v48; // xmm6
  __m128 v49; // xmm7
  _DWORD *v50; // r9
  unsigned __int64 v51; // r9
  __int64 v52; // rdx
  _DWORD *v53; // rdx
  int v54; // [rsp+0h] [rbp-68h] BYREF
  _DWORD *v55; // [rsp+18h] [rbp-50h]
  __int64 v56; // [rsp+20h] [rbp-48h]
  __int64 v57; // [rsp+28h] [rbp-40h]
  __int64 v58; // [rsp+30h] [rbp-38h]
  __int64 v59; // [rsp+38h] [rbp-30h]
  _DWORD *v60; // [rsp+40h] [rbp-28h]
  __int64 v61; // [rsp+48h] [rbp-20h]
  unsigned int v62; // [rsp+54h] [rbp-14h]
  __int64 v63; // [rsp+58h] [rbp-10h]
  int v64; // [rsp+60h] [rbp-8h]
  unsigned int v65; // [rsp+64h] [rbp-4h]

  v60 = a1;
  v59 = a2;
  if ( (unsigned __int64)&v54 <= *(_QWORD *)(v16 + 8) )
  {
    v65 = a4;
    v58 = a6;
    v57 = a5;
    v64 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_44;
  }
  if ( a1 == v15 )
    goto LABEL_29;
  v17 = *a1 >> 3;
  v18 = 34082680;
  if ( v17 != 4288481 )
  {
    switch ( v17 )
    {
      case 4260808:
        v19 = a1[1];
        break;
      case 4288437:
        v19 = *((char *)a1 + 4);
        break;
      case 4288459:
        v19 = *((__int16 *)a1 + 2);
        break;
      default:
LABEL_29:
        v65 = a4;
        v58 = a6;
        v57 = a5;
        v64 = a3;
        if ( a1 != v15 )
        {
          v36 = *(_QWORD *)(v16 + 40);
          if ( (unsigned __int64)(v36 + 48) > *(_QWORD *)(v16 + 32) )
          {
            v36 = MEMORY[0x181EAA920](a1, a2, a3: 37748472);
            a2 = v59;
            a1 = v60;
          }
          else
          {
            *(_QWORD *)(v16 + 40) = v36 + 48;
            *(_DWORD *)v36 = 37748472;
            *(_DWORD *)(v36 + 4) = 0;
            *(_QWORD *)(v36 + 8) = 0;
            *(_QWORD *)(v36 + 16) = 0;
            *(_QWORD *)(v36 + 24) = 0;
            *(_QWORD *)(v36 + 32) = 0;
            *(_QWORD *)(v36 + 40) = 0;
          }
          v37 = *(unsigned __int16 *)(a2 + 4);
          v38 = &v15[2 * (*a1 >> 3)];
          v55 = (_DWORD *)v36;
          MEMORY[0x185899880](a1, a2, a3: v36, a4: v36, a5: v37, a6: v38);
          v50 = v55;
          goto LABEL_33;
        }
        sub_182771080((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v54);
        goto LABEL_48;
    }
    v62 = v19;
    if ( HIWORD(v19) < 0x11u )
    {
      v61 = 34082680;
      v65 = a4;
      v58 = a6;
      v57 = a5;
      v64 = a3;
      v20 = MEMORY[0x184F4B200](a1, a2, a3: v19);
      v23 = *(_QWORD *)(v16 + 40);
      if ( (unsigned __int64)(v23 + 24) > *(_QWORD *)(v16 + 32) )
      {
        v56 = v20;
        v23 = MEMORY[0x181EAA920](a1: v21, a2: v22, a3: v61);
        v20 = v56;
      }
      else
      {
        *(_QWORD *)(v16 + 40) = v23 + 24;
        *(_DWORD *)v23 = 34082680;
        *(_DWORD *)(v23 + 4) = 0;
        *(_QWORD *)(v23 + 8) = 0;
        *(_QWORD *)(v23 + 16) = 0;
      }
      v24 = *(unsigned int *)(v20 + 8);
      v56 = v20;
      v55 = (_DWORD *)v23;
      MEMORY[0x184FE8D60](a1: v24, a2: v15, a3: v23, a4: v23, a5: v20, a6: 0);
      v25 = (__int64)v55;
      a2 = v59;
      goto LABEL_12;
    }
LABEL_44:
    v65 = a4;
    v58 = a6;
    v57 = a5;
    v64 = a3;
    v52 = *(_QWORD *)(v16 + 40);
    if ( (unsigned __int64)(v52 + 40) <= *(_QWORD *)(v16 + 32) )
    {
      *(_QWORD *)(v16 + 40) = v52 + 40;
      *(_DWORD *)v52 = 37748256;
      *(_DWORD *)(v52 + 4) = 0;
      *(_QWORD *)(v52 + 8) = 0;
      *(_QWORD *)(v52 + 16) = 0;
      *(_QWORD *)(v52 + 24) = 0;
      *(_QWORD *)(v52 + 32) = 0;
LABEL_46:
      *(_DWORD *)(v52 + 20) = 46923644;
      *(_DWORD *)(v52 + 16) = v15[93585974];
      *(_DWORD *)(v52 + 12) = (unsigned __int64)(v52 - (_QWORD)v15) >> 3;
      v55 = (_DWORD *)v52;
      MEMORY[0x18503B9A0](a1, a2, a3: v52, a4: v52, a5: 0);
      v53 = v55;
      v55[7] = v62;
      v50 = v53;
LABEL_33:
      sub_182769900(
        a1: v40,
        a2: v41,
        a3: v50,
        a4: v39,
        a5: (__int64)&a15,
        a6: (__int64)v50,
        a7: v42,
        a8: v43,
        a9: v44,
        a10: v45,
        a11: v46,
        a12: v47,
        a13: v48,
        a14: v49);
      goto LABEL_34;
    }
LABEL_48:
    v52 = MEMORY[0x181EAA920](a1, a2, a3: 37748256);
    goto LABEL_46;
  }
  v30 = *((__int16 *)a1 + 2);
  v31 = 34082368;
  if ( *((_WORD *)a1 + 2) < 0x100u )
  {
    v34 = *(_QWORD *)(v16 + 40);
    if ( (unsigned __int64)(v34 + 24) > *(_QWORD *)(v16 + 32) )
    {
      v63 = 34082368;
      v62 = v30;
      v61 = 34082680;
      v65 = a4;
      v58 = a6;
      v57 = a5;
      v64 = a3;
      v34 = MEMORY[0x181EAA920](a1, a2, a3: 34082680);
      v31 = v63;
      v30 = v62;
      a4 = v65;
      a2 = v59;
      a1 = v60;
      a6 = v58;
      a5 = v57;
      LODWORD(a3) = v64;
    }
    else
    {
      *(_QWORD *)(v16 + 40) = v34 + 24;
      *(_DWORD *)v34 = 34082680;
      *(_DWORD *)(v34 + 4) = 0;
      *(_QWORD *)(v34 + 8) = 0;
      *(_QWORD *)(v34 + 16) = 0;
    }
    v35 = *(_QWORD *)(v16 + 40);
    if ( (unsigned __int64)(v35 + 16) > *(_QWORD *)(v16 + 32) )
    {
      v56 = v34;
      v62 = v30;
      v65 = a4;
      v58 = a6;
      v57 = a5;
      v64 = a3;
      v35 = MEMORY[0x181EAA840](a1, a2, a3: v31, a4, a5: 1);
      v34 = v56;
      LOBYTE(v30) = v62;
      LODWORD(a4) = v65;
      a6 = v58;
      a5 = v57;
      LODWORD(a3) = v64;
    }
    else
    {
      *(_QWORD *)(v16 + 40) = v35 + 16;
      *(_QWORD *)v35 = v31;
      *(_DWORD *)(v35 + 8) = 1;
      *(_DWORD *)(v35 + 12) = 0;
    }
    *(_BYTE *)(v35 + 12) = v30;
    *(_DWORD *)(v34 + 4) = (unsigned __int64)(v35 - (_QWORD)v15) >> 3;
    if ( (*(_DWORD *)v34 & 2) == 0 )
    {
      v65 = a4;
      v58 = a6;
      v57 = a5;
      v64 = a3;
LABEL_27:
      v25 = v34;
      a2 = v59;
      goto LABEL_12;
    }
LABEL_34:
    v65 = a4;
    v58 = a6;
    v57 = a5;
    v64 = a3;
    v51 = (v34 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v34 & 0xFFFFFFFFFFF80000LL) + ((v34 - v51) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v34 & 0xFFFFFFFFFFF80000LL) + ((v34 - v51) >> 9) + 0x38) = 0;
    goto LABEL_27;
  }
  v32 = *(_QWORD *)(v16 + 40);
  if ( (unsigned __int64)(v32 + 16) > *(_QWORD *)(v16 + 32) )
  {
    v63 = 34082368;
    v62 = v30;
    v61 = 34082680;
    v65 = a4;
    v58 = a6;
    v57 = a5;
    v64 = a3;
    v32 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4, a5: 2);
    LOWORD(v30) = v62;
    v18 = v61;
    LODWORD(a4) = v65;
    a2 = v59;
    a1 = v60;
    a6 = v58;
    a5 = v57;
    LODWORD(a3) = v64;
  }
  else
  {
    *(_QWORD *)(v16 + 40) = v32 + 16;
    *(_QWORD *)v32 = 34082368;
    *(_DWORD *)(v32 + 8) = 2;
    *(_DWORD *)(v32 + 12) = 0;
  }
  *(_WORD *)(v32 + 12) = v30;
  v33 = *(_QWORD *)(v16 + 40);
  if ( (unsigned __int64)(v33 + 24) > *(_QWORD *)(v16 + 32) )
  {
    v56 = v32;
    v65 = a4;
    v58 = a6;
    v57 = a5;
    v64 = a3;
    v62 = (unsigned __int16)v30;
    v33 = MEMORY[0x181EAA920](a1, a2, a3: v18);
    v32 = v56;
    LODWORD(a4) = v65;
    a2 = v59;
    a6 = v58;
    a5 = v57;
    LODWORD(a3) = v64;
  }
  else
  {
    *(_QWORD *)(v16 + 40) = v33 + 24;
    *(_DWORD *)v33 = 34082680;
    *(_DWORD *)(v33 + 4) = 0;
    *(_QWORD *)(v33 + 8) = 0;
    *(_QWORD *)(v33 + 16) = 0;
  }
  *(_BYTE *)(v33 + 12) = 1;
  *(_DWORD *)(v33 + 4) = (unsigned __int64)(v32 - (_QWORD)v15) >> 3;
  v65 = a4;
  v58 = a6;
  v57 = a5;
  v64 = a3;
  v25 = v33;
LABEL_12:
  v26 = *(_WORD *)(a2 + 4) == 67;
  v55 = (_DWORD *)v25;
  result = sub_182776580(a1: v25, a2: v26, a3: v64, a4: v65, a5: v57, a6: v58, a7: v54, a8: -1);
  if ( *(int *)(v16 + 16) <= 0 )
    return sub_18277F280(a1: v28, a2: v29, a3: v55);
  return result;
}
