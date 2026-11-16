// sub_15A6420
// rva 0x015a6420  size 1000  section .text  group text
// window base 0x1815a6420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A6420(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  _DWORD *v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  _DWORD *v19; // rcx
  _DWORD *v20; // rsi
  __int64 v21; // rcx
  _DWORD *v22; // rax
  _DWORD *v23; // rdx
  char *v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rdi
  __int64 v31; // rbp
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rbx
  char *v34; // r8
  unsigned __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rsi
  char v39; // [rsp+0h] [rbp-58h] BYREF
  __int64 v40; // [rsp+10h] [rbp-48h]
  _DWORD *v41; // [rsp+18h] [rbp-40h]
  _DWORD *v42; // [rsp+20h] [rbp-38h]
  _DWORD *v43; // [rsp+28h] [rbp-30h]
  __int64 v44; // [rsp+30h] [rbp-28h]
  _DWORD *v45; // [rsp+38h] [rbp-20h]
  __int64 v46; // [rsp+40h] [rbp-18h]
  unsigned int v47; // [rsp+48h] [rbp-10h]
  unsigned int v48; // [rsp+4Ch] [rbp-Ch]
  __int64 v49; // [rsp+50h] [rbp-8h]

  v46 = a3;
  if ( (unsigned __int64)&v39 <= *(_QWORD *)(v9 + 8) )
  {
    v44 = a5;
    v16 = sub_1EB84E0();
LABEL_49:
    v16 = sub_2771080(a1: v16);
    goto LABEL_50;
  }
  if ( (_DWORD *)a5 == v8 )
    v10 = v8 + 94153502;
  else
    v10 = (_DWORD *)a5;
  v45 = v10;
  v11 = *(_DWORD *)((char *)v10 + (int)v8[2 * (*v10 >> 3) + 13]);
  v44 = a5;
  if ( v11 == 0 )
  {
    v11 = sub_1ED7320(a1, a2, a3: v45);
    a3 = v46;
  }
  v12 = ((v11 ^ (v11 >> 12) ^ (v11 >> 20)) >> 4)
      ^ v11
      ^ (v11 >> 12)
      ^ (v11 >> 20)
      ^ ((v11 ^ (v11 >> 12) ^ (v11 >> 20)) >> 7);
  v48 = v12;
  LODWORD(v6) = a3;
  sub_15A4C20(a1, a2, a3, a4: v12, a5, a6, a7: v39);
  v15 = *(unsigned int *)(v46 + 12);
  v16 = (__int64)&v8[2 * v15];
  if ( (_DWORD)v15 == 0 )
    goto LABEL_49;
  v17 = (unsigned int)v8[2 * v15 + 2];
  v6 = (v8[2 * v15 + 2] - 1) & v48;
  if ( (unsigned int)v17 <= (unsigned int)v6 )
  {
LABEL_50:
    sub_2771220(a1: v16, a2: v14, a3: (unsigned int)v6, a4: v17, a5: (unsigned int)v17);
    goto LABEL_51;
  }
  v18 = *(unsigned int *)(v16 + 4 * v6 + 12);
  v19 = &v8[2 * v18];
  if ( (_DWORD)v18 != 0 )
  {
    v20 = &v8[2 * v8[2 * v18 + 6]];
    if ( v48 != v8[2 * v18 + 7] )
    {
      v47 = v6;
      v43 = (_DWORD *)v16;
      goto LABEL_11;
    }
    v42 = &v8[2 * v8[2 * v18 + 6]];
    v47 = v6;
    v43 = (_DWORD *)v16;
    v41 = &v8[2 * v18];
    if ( (unsigned int)sub_1EBE3A0(a1: v13, a2: v20, a3: v41, a4: v19, a5: v45) == 0 )
    {
      v20 = v42;
      v19 = v41;
LABEL_11:
      v41 = v19;
      v21 = v48;
      v22 = v45;
      while ( v20 != v8 )
      {
        v23 = &v8[2 * v20[6]];
        if ( (_DWORD)v21 == v20[7] )
        {
          v42 = &v8[2 * v20[6]];
          v40 = (__int64)v20;
          if ( (unsigned int)sub_1EBE3A0(a1: v13, a2: v20, a3: v20, a4: v21, a5: v22) != 0 )
          {
            v25 = (char *)v42;
            v26 = v40;
            goto LABEL_29;
          }
          if ( *(int *)(v9 + 16) <= 0 )
            sub_277F280();
          v49 = v7;
          v41 = (_DWORD *)v40;
          v20 = v42;
          v21 = v48;
          v22 = v45;
        }
        else if ( *(int *)(v9 + 16) <= 0 )
        {
          v42 = &v8[2 * v20[6]];
          v40 = (__int64)v20;
          sub_277F280();
          v49 = v7;
          v41 = (_DWORD *)v40;
          v20 = v42;
          v22 = v45;
        }
        else
        {
          v41 = v20;
          v20 = v23;
        }
      }
      goto LABEL_23;
    }
    v25 = (char *)v42;
    v26 = (__int64)v41;
LABEL_29:
    v27 = (unsigned __int64)v41;
    v28 = v46;
    ++*(_DWORD *)(v46 + 44);
    --*(_DWORD *)(v28 + 36);
    v29 = (unsigned __int64)(v25 - (char *)v8) >> 3;
    if ( v26 == v27 )
    {
      v31 = v47;
      v30 = (unsigned __int64)v43;
      v43[v47 + 3] = v29;
      if ( (*(_DWORD *)v30 & 2) != 0 )
      {
        if ( (*(_DWORD *)v30 & 1) != 0 )
        {
          v34 = (char *)(v30 - *(_QWORD *)(v30 - 8));
          v35 = (unsigned __int64)(4 * v31 + 12) >> 9;
          if ( v34[v35 + 48] != 0 )
            v34[v35 + 48] = 0;
        }
        else
        {
          v32 = (v30 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v30 & 0xFFFFFFFFFFF80000LL) + ((v30 - v32) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v30 & 0xFFFFFFFFFFF80000LL) + ((v30 - v32) >> 9) + 0x38) = 0;
        }
      }
    }
    else
    {
      if ( (_DWORD *)v27 == v8 )
      {
LABEL_52:
        sub_2771080(a1: v43, a2: v25, a3: v28, a4: v45, a5: v44);
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
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        return sub_15A6820(a1: v37, a2: v38, a3: v36);
      }
      *(_DWORD *)(v27 + 24) = v29;
      if ( (*(_DWORD *)v27 & 2) != 0 )
      {
        v30 = (unsigned __int64)v43;
        v33 = (v27 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v33) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v33) >> 9) + 0x38) = 0;
      }
      else
      {
        v30 = (unsigned __int64)v43;
      }
    }
    if ( (_DWORD *)v26 != v8 )
    {
      if ( *(int *)(v9 + 16) <= 0 )
        v26 = sub_277F280(a1: v30);
      return (__int64)&v8[2 * *(unsigned int *)(v26 + 20)];
    }
LABEL_51:
    sub_2771080(a1: v30);
    goto LABEL_52;
  }
  v47 = v6;
  v43 = (_DWORD *)v16;
LABEL_23:
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280(a1: v43);
  return (__int64)v8;
}
