// sub_501DC20
// rva 0x0501dc20  size 939  section .text  group text
// window base 0x18501dc20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501DC20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rdx
  unsigned int v9; // r9d
  unsigned int v11; // ebp
  unsigned int v12; // r10d
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // edx
  unsigned int v26; // r9d
  unsigned int v27; // r10d
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  signed int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned int v36; // eax
  __int64 v37; // [rsp+0h] [rbp-68h] BYREF
  __int64 v38; // [rsp+10h] [rbp-58h]
  __int64 v39; // [rsp+18h] [rbp-50h]
  unsigned int v40; // [rsp+24h] [rbp-44h]
  int v41; // [rsp+28h] [rbp-40h]
  unsigned int v42; // [rsp+2Ch] [rbp-3Ch]
  unsigned int v43; // [rsp+30h] [rbp-38h]
  unsigned int v44; // [rsp+34h] [rbp-34h]
  unsigned int v45; // [rsp+38h] [rbp-30h]
  unsigned int v46; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v47; // [rsp+40h] [rbp-28h]
  int v48; // [rsp+44h] [rbp-24h]
  unsigned int v49; // [rsp+48h] [rbp-20h]
  int v50; // [rsp+4Ch] [rbp-1Ch]
  unsigned int v51; // [rsp+50h] [rbp-18h]
  unsigned int v52; // [rsp+54h] [rbp-14h]
  unsigned int v53; // [rsp+58h] [rbp-10h]
  unsigned int v54; // [rsp+5Ch] [rbp-Ch]
  __int64 v55; // [rsp+60h] [rbp-8h]

  if ( (unsigned __int64)&v37 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
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
    return sub_501DFE0();
  }
  v39 = a3;
  v54 = a5;
  v38 = a1;
  v53 = a2;
  v52 = a4 + a2;
  v51 = a6 + a5;
  if ( (int)(a6 + a5) <= (int)a5 )
  {
    v48 = a4;
    v47 = a6;
    v8 = (unsigned int)a2;
LABEL_4:
    v9 = v47;
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280(a1, a2, a3: v8, a4, a5, a6: v47);
    return v9 - v48;
  }
  if ( (int)a4 + (int)a2 <= (int)a2 )
  {
    v48 = a4;
    v47 = a6;
    v8 = (unsigned int)a2;
    goto LABEL_4;
  }
  v11 = *(unsigned __int16 *)(a3 + 2 * (int)a5 + 12);
  v50 = v11;
  v12 = *(unsigned __int16 *)(a1 + 2 * (int)a2 + 12);
  v49 = v12;
  if ( v12 == v11 )
  {
    v48 = a4;
    v47 = a6;
    v25 = a2;
    goto LABEL_21;
  }
  v48 = a4;
  v47 = a6;
  if ( (unsigned int)sub_501D8E0(a1, a2, a3: v11, a4, a5: v12) == 0 )
  {
    v25 = v53;
    LODWORD(a5) = v54;
    goto LABEL_21;
  }
  v14 = sub_501D760(a1: v54, a2: v51, a3: v39, a4: v13, a5: v50, a6: v54);
  if ( v14 < 0 )
  {
    v50 = -v14;
    v46 = v54 + 1;
  }
  else
  {
    v50 = v14;
    v55 = v6;
    v46 = v54;
  }
  v16 = sub_501D760(a1: v53, a2: v52, a3: v38, a4: v15, a5: v49, a6: v53);
  if ( v16 < 0 )
  {
    v16 = -v16;
    v19 = v53 + 1;
    v49 = v53 + 1;
  }
  else
  {
    v55 = v6;
    v49 = v53;
  }
  v45 = v16;
  v20 = sub_501D8E0(a1: v18, a2: v19, a3: v50, a4: v17, a5: v16);
  if ( v20 == 0 )
  {
    v25 = v49;
    LODWORD(a5) = v46;
LABEL_21:
    v8 = v25 + 1;
    a5 = (unsigned int)(a5 + 1);
    while ( 1 )
    {
      a1 = v38;
      a4 = v39;
      if ( (int)v51 <= (int)a5 || (int)v52 <= (int)v8 )
        goto LABEL_4;
      v26 = *(unsigned __int16 *)(v39 + 2 * (int)a5 + 12);
      v27 = *(unsigned __int16 *)(v38 + 2 * (int)v8 + 12);
      v44 = v27;
      if ( v27 != v26 )
      {
        v43 = a5;
        v42 = v8;
        v41 = v26;
        if ( (unsigned int)sub_501D8E0(a1: v38, a2, a3: v26, a4: v39, a5: v27) != 0 )
        {
          v30 = sub_501D760(a1: v54, a2: v51, a3: v39, a4: v29, a5: v41, a6: v43);
          if ( v30 < 0 )
          {
            v41 = -v30;
            v40 = v43 + 1;
          }
          else
          {
            v41 = v30;
            v55 = v6;
            v40 = v43;
          }
          v32 = sub_501D760(a1: v53, a2: v52, a3: v38, a4: v31, a5: v44, a6: v42);
          if ( v32 < 0 )
          {
            v32 = -v32;
            v44 = v42 + 1;
          }
          else
          {
            v55 = v6;
            v44 = v42;
          }
          v42 = v32;
          v36 = sub_501D8E0(a1: v34, a2: v35, a3: v41, a4: v33, a5: v32);
          if ( v36 != 0 )
          {
            v21 = v36;
            v22 = v42;
            v23 = v44;
            v24 = v40;
            goto LABEL_17;
          }
          v8 = v44;
          LODWORD(a5) = v40;
        }
        else
        {
          v8 = v42;
          LODWORD(a5) = v43;
        }
      }
      v28 = (unsigned int)(v8 + 1);
      if ( *(int *)(v7 + 16) <= 0 )
        a5 = (unsigned int)sub_277F280(a1, a2, a3: v8, a4: v28);
      else
        a5 = (unsigned int)(a5 + 1);
      v8 = (unsigned int)v28;
    }
  }
  v21 = v20;
  v22 = v45;
  v23 = v49;
  v24 = v46;
LABEL_17:
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1, a2: v51, a3: v23, a4: v22, a5: v24, a6: v47);
  return v21;
}
