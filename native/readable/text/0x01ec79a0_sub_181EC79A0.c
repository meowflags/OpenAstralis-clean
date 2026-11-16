// sub_1EC79A0
// rva 0x01ec79a0  size 1100  section .text  group text
// window base 0x181ec79a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1EC79A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  char *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdi
  _DWORD *v35; // r9
  __int64 v36; // rsi
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  _DWORD *result; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdx
  int v45; // [rsp+0h] [rbp-78h] BYREF
  __int64 v46; // [rsp+8h] [rbp-70h]
  __int64 v47; // [rsp+10h] [rbp-68h]
  __int64 v48; // [rsp+18h] [rbp-60h]
  __int64 v49; // [rsp+20h] [rbp-58h]
  __int64 v50; // [rsp+28h] [rbp-50h]
  __int64 v51; // [rsp+30h] [rbp-48h]
  __int64 v52; // [rsp+38h] [rbp-40h]
  __int64 v53; // [rsp+40h] [rbp-38h]
  int v54; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v55; // [rsp+50h] [rbp-28h]
  unsigned int v56; // [rsp+54h] [rbp-24h]
  __int64 v57; // [rsp+58h] [rbp-20h]
  unsigned int v58; // [rsp+64h] [rbp-14h]
  unsigned int v59; // [rsp+68h] [rbp-10h]
  unsigned int v60; // [rsp+6Ch] [rbp-Ch]
  __int64 v61; // [rsp+70h] [rbp-8h]

  v53 = a3;
  v52 = a5;
  v60 = a6;
  if ( (unsigned __int64)&v45 <= *(_QWORD *)(v8 + 8) )
  {
    v59 = a1;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v45);
  }
  else if ( (_DWORD *)a5 != v7 )
  {
    v9 = *(unsigned int *)(a5 + 28);
    if ( (_DWORD)v9 == 0 )
    {
LABEL_42:
      v59 = a1;
      sub_2771080();
      goto LABEL_43;
    }
    v10 = (unsigned int)v7[2 * v9 + 11];
    if ( (_DWORD)v10 == 0 )
    {
LABEL_43:
      v59 = a1;
      sub_2771080();
      goto LABEL_44;
    }
    v59 = a1;
    sub_15ABC60(a1, a2, a3: &v7[2 * v10]);
    v13 = *(unsigned int *)(v53 + 4);
    if ( (_DWORD)v13 == 0 )
    {
LABEL_44:
      sub_2771080();
      goto LABEL_45;
    }
    v14 = sub_28A0EC0(a1: v11, a2: v12, a3: &v7[2 * v13]);
    v18 = (__int64)(v7 + 94091572);
    if ( (_DWORD *)v14 == v7 )
    {
LABEL_45:
      result = (_DWORD *)sub_2771080(a1: v16, a2: v17, a3: v15, a4: v18);
LABEL_46:
      sub_276FC00(a1: v42, a2: v43, a3: result, a4: v56, a5: v7 + 10112964);
      goto LABEL_47;
    }
    v51 = v14;
    v58 = *(_DWORD *)(v14 + 8);
    v19 = 34161576;
    if ( v58 == 0 )
    {
      v29 = v60;
      v37 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v37 + 24) > *(_QWORD *)(v8 + 32) )
      {
        v57 = 34161576;
        v37 = sub_1EAA920(a1: (__int64)v16, a2: v17, a3: 34161576);
        v29 = v60;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v37 + 24;
        *(_DWORD *)v37 = 34161576;
        *(_DWORD *)(v37 + 4) = 0;
        *(_QWORD *)(v37 + 8) = 0;
        *(_QWORD *)(v37 + 16) = 0;
      }
      *(_DWORD *)(v37 + 8) = 47045786;
      v56 = 0;
      goto LABEL_23;
    }
    v20 = *(unsigned int *)(v14 + 12);
    if ( v60 == 0 )
      goto LABEL_9;
    if ( (_DWORD)v20 != 0 )
    {
      v17 = v7[2 * v20 + 16] & 0x1DFF;
      if ( (v7[2 * v20 + 16] & 1) == 0 )
      {
        v57 = 34161576;
        v44 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v44 + 24) > *(_QWORD *)(v8 + 32) )
        {
          v44 = sub_1EAA920(a1: (__int64)v16, a2: v17, a3: v57);
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v44 + 24;
          *(_DWORD *)v44 = 34161576;
          *(_DWORD *)(v44 + 4) = 0;
          *(_QWORD *)(v44 + 8) = 0;
          *(_QWORD *)(v44 + 16) = 0;
        }
        *(_DWORD *)(v44 + 8) = 47045786;
        v49 = v44;
LABEL_12:
        v26 = 1;
        v27 = v58;
        v28 = v51;
        v29 = v60;
        v30 = v52;
        v31 = v53;
        while ( v27 > (int)v26 )
        {
          if ( v27 <= (unsigned int)v26 )
            goto LABEL_48;
          v17 = *(unsigned int *)(v28 + 4 * v26 + 12);
          v16 = (char *)&v7[2 * v17];
          if ( (_DWORD)v29 == 0 )
            goto LABEL_16;
          if ( (_DWORD)v17 == 0 )
            goto LABEL_49;
          if ( (v7[2 * v17 + 16] & 1) != 0 )
          {
LABEL_16:
            v55 = v26 + 1;
            v54 = v26;
            v50 = (__int64)&v7[2 * v17];
            v32 = sub_1EC6DC0(
                    a1: (__int64)v16,
                    a2: v31,
                    a3: v31,
                    a4: v28,
                    a5: v30,
                    a6: v16,
                    a7: v45,
                    a8: v46,
                    a9: v47,
                    a10: v48,
                    a11: v49);
            v33 = v49;
            ++*(_DWORD *)(v49 + 4);
            v34 = *(unsigned int *)(v33 + 12);
            v35 = &v7[2 * *(unsigned int *)(v33 + 8)];
            v48 = v32;
            sub_57881C0(a1: v34, a2: v36, a3: v33, a4: v33, a5: v32, a6: v35);
            v26 = v55;
            v27 = v58;
            v28 = v51;
            v29 = v60;
            v30 = v52;
            v31 = v53;
          }
          else
          {
            v26 = (unsigned int)(v26 + 1);
          }
        }
        v56 = v26;
        v37 = v49;
LABEL_23:
        v38 = *(_QWORD *)(v8 + 40);
        v39 = v38 + 16;
        if ( (unsigned __int64)(v38 + 16) > *(_QWORD *)(v8 + 32) )
        {
          v48 = v37;
          v40 = sub_1EAA840(a1: (__int64)v16, a2: v17, a3: 40451856, a4: v39, a5: 0);
          v37 = v48;
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v39;
          *(_QWORD *)v38 = 40451856;
          *(_DWORD *)(v38 + 8) = 0;
          *(_DWORD *)(v38 + 12) = 0;
          v40 = v38;
        }
        v48 = v37;
        result = (_DWORD *)sub_578E980(a1: v16, a2: v17, a3: v37, a4: v39, a5: v40, a6: v29);
        if ( result == v7 || *result >> 3 == 5056482 )
        {
          if ( *(int *)(v8 + 16) <= 0 )
            return (_DWORD *)sub_277F280();
          return result;
        }
        goto LABEL_46;
      }
LABEL_9:
      v57 = 34161576;
      v50 = (__int64)(v7 + 94091572);
      v21 = sub_1EC6DC0(
              a1: (__int64)v16,
              a2: v17,
              a3: v53,
              a4: v18,
              a5: v52,
              a6: (char *)&v7[2 * v20],
              a7: v45,
              a8: v46,
              a9: v47,
              a10: (int)v7 + 8 * (int)v20,
              a11: v49);
      v24 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v24 + 24) > *(_QWORD *)(v8 + 32) )
      {
        v47 = v21;
        v24 = sub_1EAA920(a1: v22, a2: v23, a3: v57);
        v21 = v47;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v24 + 24;
        *(_DWORD *)v24 = 34161576;
        *(_DWORD *)(v24 + 4) = 0;
        *(_QWORD *)(v24 + 8) = 0;
        *(_QWORD *)(v24 + 16) = 0;
      }
      *(_DWORD *)(v24 + 8) = 47045786;
      *(_DWORD *)(v24 + 4) = 1;
      v25 = v50;
      v47 = v21;
      v50 = v24;
      sub_57881C0(a1: 0, a2: v23, a3: v24, a4: v24, a5: v21, a6: v25);
      v61 = v6;
      v49 = v50;
      goto LABEL_12;
    }
LABEL_47:
    LODWORD(v26) = sub_2771080(a1: v16, a2: v17, a3: v19, a4: v18);
LABEL_48:
    v54 = v26;
    sub_2771220(a1: v16, a2: v17, a3: (unsigned int)v26, a4: v28, a5: v58, a6: v29);
LABEL_49:
    sub_2771080(a1: v16, a2: v59, a3: v28, a4: v49, a5: v30);
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
    return (_DWORD *)sub_1EC7E00();
  }
  v59 = a1;
  sub_2771080();
  goto LABEL_42;
}
