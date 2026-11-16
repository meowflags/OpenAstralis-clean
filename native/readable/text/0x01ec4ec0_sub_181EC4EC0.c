// sub_1EC4EC0
// rva 0x01ec4ec0  size 721  section .text  group text
// window base 0x181ec4ec0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1EC4EC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        __int64 a16)
{
  __int64 v16; // r13
  _DWORD *v17; // r14
  __int64 v18; // r15
  __int64 v19; // rax
  _DWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rcx
  _DWORD *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdx
  _DWORD *v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdi
  _DWORD *v41; // r9
  _DWORD *result; // rax
  __int64 v43; // rdi
  __int64 v44; // rsi
  char v45; // [rsp+0h] [rbp-68h] BYREF
  __int64 v46; // [rsp+8h] [rbp-60h]
  __int64 v47; // [rsp+10h] [rbp-58h]
  _DWORD *v48; // [rsp+18h] [rbp-50h]
  __int64 v49; // [rsp+20h] [rbp-48h]
  _DWORD *v50; // [rsp+28h] [rbp-40h]
  __int64 v51; // [rsp+30h] [rbp-38h]
  __int64 v52; // [rsp+38h] [rbp-30h]
  unsigned int v53; // [rsp+44h] [rbp-24h]
  int v54; // [rsp+48h] [rbp-20h]
  unsigned int v55; // [rsp+4Ch] [rbp-1Ch]
  __int64 v56; // [rsp+50h] [rbp-18h]
  unsigned int v57; // [rsp+5Ch] [rbp-Ch]
  __int64 v58; // [rsp+60h] [rbp-8h]

  v52 = a3;
  if ( (unsigned __int64)&v45 <= *(_QWORD *)(v18 + 8) )
  {
    v51 = a5;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v45);
    goto LABEL_18;
  }
  v19 = *(unsigned int *)(a3 + 4);
  v20 = v17 + 94091572;
  if ( (_DWORD)v19 == 0 )
  {
LABEL_18:
    v51 = a5;
    sub_2771080(a1, a2, a3, a4: v20);
    goto LABEL_19;
  }
  v50 = v17 + 94091572;
  v51 = a5;
  v21 = sub_28A0580(a1, a2, a3: &v17[2 * v19]);
  if ( (_DWORD *)v21 == v17 )
  {
LABEL_19:
    result = (_DWORD *)sub_2771080();
    goto LABEL_20;
  }
  v49 = v21;
  v26 = *(unsigned int *)(v21 + 8);
  v57 = v26;
  if ( (_DWORD)v26 == 0 )
    return (_DWORD *)sub_181EC50AB(
                       a1: v22,
                       a2: v23,
                       a3: 34161576,
                       a4: 0,
                       a5: v24,
                       a6: v25,
                       a7,
                       a8,
                       a9,
                       a10,
                       a11,
                       a12,
                       a13,
                       a14,
                       a15,
                       a16);
  v56 = 34161576;
  v27 = &v17[2 * *(unsigned int *)(v52 + 4)];
  v48 = &v17[2 * *(unsigned int *)(v21 + 12)];
  v28 = sub_1EC5420(a1: v22, a2: v23, a3: v48, a4: v26, a5: v27);
  v30 = *(_QWORD *)(v18 + 40);
  if ( (unsigned __int64)(v30 + 24) > *(_QWORD *)(v18 + 32) )
    JUMPOUT(0x181EC510FLL);
  *(_QWORD *)(v18 + 40) = v30 + 24;
  *(_DWORD *)v30 = 34161576;
  *(_DWORD *)(v30 + 4) = 0;
  *(_QWORD *)(v30 + 8) = 0;
  *(_QWORD *)(v30 + 16) = 0;
  *(_DWORD *)(v30 + 8) = 47045786;
  if ( (_DWORD *)v28 == v17 )
    JUMPOUT(0x181EC5105LL);
  *(_DWORD *)(v30 + 4) = 1;
  v31 = v50;
  v47 = v28;
  v50 = (_DWORD *)v30;
  sub_57881C0(a1: 0, a2: v29, a3: v30, a4: v30, a5: v28, a6: v31);
  v58 = v16;
  v46 = (__int64)v50;
  v34 = 1;
  while ( 1 )
  {
    v35 = v57;
    v36 = v52;
    if ( (int)v57 <= (int)v34 )
      break;
    if ( v57 <= (unsigned int)v34 )
      goto LABEL_21;
    v37 = *(unsigned int *)(v52 + 4);
    v50 = &v17[2 * *(unsigned int *)(v49 + 4 * v34 + 12)];
    v54 = v34;
    v38 = sub_1EC5420(a1: v32, a2: v50, a3: v50, a4: v57, a5: &v17[2 * v37]);
    if ( (_DWORD *)v38 == v17 )
    {
      v34 = (unsigned int)(v54 + 1);
    }
    else
    {
      v53 = v54 + 1;
      v39 = v46;
      ++*(_DWORD *)(v46 + 4);
      v40 = *(unsigned int *)(v39 + 12);
      v41 = &v17[2 * *(unsigned int *)(v39 + 8)];
      v47 = v38;
      sub_57881C0(a1: v40, a2: v33, a3: v39, a4: v39, a5: v38, a6: v41);
      v34 = v53;
    }
  }
  v55 = v34;
  v47 = v46;
  result = (_DWORD *)sub_578E980(a1: v32, a2: v33, a3: v46, a4: v46, a5: v17 + 94164832);
  if ( result == v17 || *result >> 3 == 4260673 )
  {
    if ( *(int *)(v18 + 16) <= 0 )
      return (_DWORD *)sub_277F280();
    return result;
  }
LABEL_20:
  LODWORD(v34) = sub_276FC00(a1: v43, a2: v44, a3: result, a4: v55, a5: v17 + 8521346);
LABEL_21:
  sub_2771220(a1: v51, a2: v36, a3: (unsigned int)v34, a4: v35, a5: (unsigned int)v35);
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
  return (_DWORD *)sub_1EC51A0();
}
