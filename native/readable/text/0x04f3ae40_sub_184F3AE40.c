// sub_4F3AE40
// rva 0x04f3ae40  size 892  section .text  group text
// window base 0x184f3ae40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F3AE40(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  __int64 v8; // r13
  _DWORD *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v13; // rdx
  int v14; // r8d
  unsigned int v15; // r8d
  __int64 (__fastcall *v16)(__int64, _DWORD *, _DWORD *, _QWORD, _QWORD); // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rcx
  signed int v28; // r8d
  __int64 v29; // rbx
  _DWORD *v30; // rcx
  signed int v31; // eax
  _DWORD *v32; // rsi
  __int64 v33; // rdx
  __int64 (__fastcall *v34)(__int64, _DWORD *, _DWORD *); // r10
  unsigned int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // [rsp+0h] [rbp-58h] BYREF
  __int64 v45; // [rsp+8h] [rbp-50h]
  _DWORD *v46; // [rsp+10h] [rbp-48h]
  _DWORD *v47; // [rsp+18h] [rbp-40h]
  _DWORD *v48; // [rsp+20h] [rbp-38h]
  unsigned int v49; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v50; // [rsp+30h] [rbp-28h]
  unsigned int v51; // [rsp+34h] [rbp-24h]
  unsigned int v52; // [rsp+38h] [rbp-20h]
  unsigned int v53; // [rsp+3Ch] [rbp-1Ch]
  int v54; // [rsp+40h] [rbp-18h]
  unsigned int v55; // [rsp+44h] [rbp-14h]
  unsigned int v56; // [rsp+48h] [rbp-10h]
  unsigned int v57; // [rsp+4Ch] [rbp-Ch]
  __int64 v58; // [rsp+50h] [rbp-8h]

  v48 = a2;
  if ( (unsigned __int64)&v44 <= *(_QWORD *)(v10 + 8) )
  {
    v57 = a4;
    v56 = a1;
    v55 = a6;
    sub_1EB84E0();
LABEL_26:
    sub_2771080();
    goto LABEL_27;
  }
  v47 = (_DWORD *)a3;
  if ( a5 != 0 )
  {
    v55 = a6;
    v54 = a5;
    v56 = a1;
    v57 = a4;
    sub_5022000(a1: (unsigned int)a4, a2: a8, a3, a4, a5: (unsigned int)a1, a6: a2);
    v11 = (__int64)v47;
LABEL_4:
    if ( *(int *)(v10 + 16) <= 0 )
      sub_277F280();
    return v11;
  }
  v57 = a4;
  v56 = a1;
  v55 = a6;
  v54 = 0;
  if ( (int)a8 <= (int)a4 )
  {
    v11 = (__int64)v47;
    goto LABEL_4;
  }
  if ( a2 == v9 )
    goto LABEL_26;
  if ( (unsigned __int16)v9[2 * v9[2 * (*a2 >> 3) + 5]
                          + 3
                          + (v9[2 * (*a2 >> 3) + 11] & (0x568u >> HIBYTE(v9[2 * (*a2 >> 3) + 11])))] != 1384 )
  {
LABEL_27:
    sub_2770780();
LABEL_28:
    sub_2771080(a1: v19);
    goto LABEL_29;
  }
  v13 = *a2 >> 3;
  v14 = v9[2 * v13 + 11];
  v46 = &v9[2 * v9[2 * v13 + 5]];
  v53 = v14 & (0x568u >> SHIBYTE(v14));
  v15 = v46[v53 + 3];
  v45 = (__int64)&v9[2 * v13];
  v16 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *, _QWORD, _QWORD))(v8 + *(_QWORD *)(v45 + HIWORD(v15)));
  v17 = v16(a1, a2, a3: a2, a4: v16, a5: v57);
  if ( v17 >= 0x100 )
  {
    v52 = v17;
    v58 = v8;
    v53 = v56;
    v49 = v57;
LABEL_13:
    v45 = sub_4F395A0(a1: v19, a2: v20, a3: (__int64)v47, a4: v18, a5: v55);
    v51 = v53 + 1;
    sub_501CF00(a1: v21, a2: v22, a3: v53, a4: v53 + 1, a5: v45);
    v23 = v52;
    v24 = v45;
    *(_WORD *)(v45 + (int)(2 * v53) + 12) = v52;
    sub_5022000(a1: ++v49, a2: a8, a3: v24, a4: v23, a5: v51, a6: v48);
    if ( *(int *)(v10 + 16) <= 0 )
      sub_277F280(a1: v25, a2: v26, a3: v51, a4: v52);
    return v45;
  }
  v19 = v56 + 1;
  if ( v47 == v9 )
    goto LABEL_28;
  v27 = (unsigned int)v47[2];
  if ( (unsigned int)v27 > v56 )
  {
    v52 = v47[2];
    *((_BYTE *)v47 + v56 + 12) = v17;
    v28 = v57 + 1;
    v51 = v19;
    v29 = v53;
    v30 = v46;
    v31 = a8;
    v32 = v48;
    v33 = v45;
    while ( 1 )
    {
      if ( v31 <= v28 )
      {
        v11 = (__int64)v47;
        goto LABEL_4;
      }
      v34 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v8 + *(_QWORD *)(v33 + HIWORD(v30[v29 + 3])));
      v50 = v28;
      v35 = v34(a1: v19, a2: v32, a3: v32);
      if ( v35 >= 0x100 )
        break;
      v36 = v52;
      v37 = v51 + 1;
      if ( v52 <= v51 )
        goto LABEL_30;
      *((_BYTE *)v47 + v51 + 12) = v35;
      v28 = v50 + 1;
      v51 = v37;
      v33 = v45;
      v29 = v53;
      v30 = v46;
      v31 = a8;
      v32 = v48;
    }
    v52 = v35;
    v58 = v8;
    v53 = v51;
    v49 = v50;
    goto LABEL_13;
  }
LABEL_29:
  sub_2771220(a1: v19, a2: v20, a3: v56, a4: v27, a5: (unsigned int)v27);
LABEL_30:
  sub_2771220(a1: v50, a2: v48, a3: v51, a4: v36, a5: (unsigned int)v36, a6: a8);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_4F3B1C0(a1: v40, a2: v41, a3: v38, a4: v39, a5: v42, a6: v43);
}
