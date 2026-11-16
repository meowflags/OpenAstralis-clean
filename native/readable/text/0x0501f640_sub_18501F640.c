// sub_501F640
// rva 0x0501f640  size 1517  section .text  group text
// window base 0x18501f640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501F640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  signed int v10; // r11d
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int16 v13; // r9
  int v14; // r10d
  __int64 v15; // rcx
  unsigned int v16; // r11d
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned int v19; // esi
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // r9
  __int64 v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rbp
  unsigned int v33; // r12d
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // r9d
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rcx
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rbp
  char v48; // [rsp+0h] [rbp-58h] BYREF
  __int64 v49; // [rsp+8h] [rbp-50h]
  __int64 v50; // [rsp+10h] [rbp-48h]
  unsigned int v51; // [rsp+1Ch] [rbp-3Ch]
  __int64 v52; // [rsp+20h] [rbp-38h]
  unsigned int v53; // [rsp+28h] [rbp-30h]
  int v54; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v55; // [rsp+30h] [rbp-28h]
  int v56; // [rsp+34h] [rbp-24h]
  unsigned int v57; // [rsp+38h] [rbp-20h]
  int v58; // [rsp+3Ch] [rbp-1Ch]
  int v59; // [rsp+40h] [rbp-18h]
  unsigned int v60; // [rsp+44h] [rbp-14h]
  __int64 v61; // [rsp+48h] [rbp-10h]
  unsigned int v62; // [rsp+54h] [rbp-4h]

  v50 = a3;
  v62 = a6;
  if ( (unsigned __int64)&v48 <= *(_QWORD *)(v8 + 8) )
  {
LABEL_50:
    sub_1EB84E0();
LABEL_51:
    v58 = a5;
    sub_2771080();
LABEL_52:
    sub_2771080();
LABEL_53:
    v58 = a5;
    sub_2771220(a1, a2, a3: (unsigned int)a5, a4: v9, a5: v57);
LABEL_54:
    sub_2771080();
LABEL_55:
    sub_2771220(a1, a2: v12, a3: (unsigned int)v6, a4: v15, a5: v57);
LABEL_56:
    sub_2771220(a1, a2: v62, a3: (unsigned int)v22, a4: v15, a5: v16);
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
    return sub_501FC40();
  }
  else
  {
    v61 = 34082368;
    v9 = (unsigned int)(a6 - 1);
    v60 = a6 - 1;
    while ( 1 )
    {
      v49 = a1;
      v59 = a2;
      if ( a6 <= (int)a5 )
        break;
      if ( a3 == v7 )
        goto LABEL_51;
      LODWORD(v6) = *(_DWORD *)(a3 + 8);
      v57 = v6;
      if ( (unsigned int)v6 <= (unsigned int)a5 )
        goto LABEL_53;
      v56 = *(_DWORD *)(a3 + 4 * a5 + 12);
      if ( v56 >= 0x10000 )
        JUMPOUT(0x30A03A6C8LL);
      v10 = a2 + v9 - a5 + 1;
      v55 = v10;
      if ( a1 == v7 )
        goto LABEL_54;
      v54 = v9 - a5;
      v53 = *(_DWORD *)(a1 + 8);
      if ( v10 > (int)(v53 >> 1) )
      {
        v58 = a5;
        v54 += v10;
        v24 = sub_50217A0(a1, a2, a3: v54, a4: v9, a5, a6, a7: v48);
        if ( (v24 & 0x80000000) == 0 )
        {
          v28 = *(_QWORD *)(v8 + 40);
          v29 = *(_QWORD *)(v8 + 32);
          v30 = (v24 + 19LL) & 0x1FFFFFFF8LL;
          if ( v30 >= 0x20000 || (v31 = v28 + v30) > v29 )
          {
            v52 = v24;
            v51 = v24;
            sub_1EAA840(a1: v29, a2: v27, a3: v61, a4: v28, a5: v24);
            v24 = v51;
            v33 = v53;
          }
          else
          {
            v32 = v61;
            *(_QWORD *)(v8 + 40) = v31;
            *(_QWORD *)v28 = v32;
            *(_DWORD *)(v28 + 8) = v24;
            v33 = v53;
          }
          if ( v33 >= v24 )
            JUMPOUT(0x30A03A8B4LL);
          JUMPOUT(0x30A03A8A7LL);
        }
LABEL_49:
        sub_579A560(a1: v26, a2: v27, a3: v49, a4: v25, a5: v24);
        goto LABEL_50;
      }
      v58 = a5;
      v11 = 2 * v59;
      v12 = (unsigned int)(v59 + 1);
      v13 = v56;
      if ( (v56 & 0xFFFF0000) != 0 )
      {
        v14 = v59;
        *(_WORD *)(a1 + v11 + 12) = ((unsigned int)v56 >> 10) - 10304;
        v12 = (unsigned int)(2 * v12);
        *(_WORD *)(a1 + (int)v12 + 12) = (v13 & 0x3FF) - 9216;
        v15 = (unsigned int)(v14 + 2);
      }
      else
      {
        *(_WORD *)(a1 + v11 + 12) = v56;
        v15 = (unsigned int)v12;
      }
      v6 = (unsigned int)(v58 + 1);
      if ( (int)v15 + 2 > (int)v55 )
      {
        a3 = v50;
        if ( *(int *)(v8 + 16) <= 0 )
        {
          sub_277F280(a1, a2: v12, a3: v50, a4: v15, a5: v55);
          a2 = v34;
          a5 = (unsigned int)v6;
          v9 = v60;
          a6 = v62;
          a3 = v50;
        }
        else
        {
          a2 = (unsigned int)v15;
          a5 = (unsigned int)v6;
          v9 = v60;
          a6 = v62;
        }
      }
      else
      {
        v16 = v57;
        if ( v57 <= (unsigned int)v6 )
          goto LABEL_55;
        a3 = v50;
        v17 = *(_DWORD *)(v50 + 4 * v6 + 12);
        v18 = v55;
        while ( 1 )
        {
          v19 = v15 + 1;
          v20 = 2 * (int)v15;
          if ( (v17 & 0xFFFF0000) != 0 )
          {
            *(_WORD *)(a1 + v20 + 12) = (v17 >> 10) - 10304;
            *(_WORD *)(a1 + (int)(2 * v19) + 12) = (v17 & 0x3FF) - 9216;
            v15 = (unsigned int)(v15 + 2);
          }
          else
          {
            *(_WORD *)(a1 + v20 + 12) = v17;
            v15 = v19;
          }
          v21 = (unsigned int)(v15 + 2);
          v22 = (unsigned int)(v6 + 1);
          if ( (int)v21 > (int)v18 )
            break;
          if ( v16 <= (unsigned int)v22 )
            goto LABEL_56;
          v23 = *(unsigned int *)(a3 + 4 * v22 + 12);
          if ( *(int *)(v8 + 16) <= 0 )
            sub_277F280(a1, a2: v23);
          LODWORD(v6) = v22;
          v17 = v23;
        }
        if ( *(int *)(v8 + 16) <= 0 )
        {
          sub_277F280(a1, a2: v21, a3, a4: v15, a5: v18, a6: v22);
          a2 = v35;
          a5 = v36;
          v9 = v60;
          a6 = v62;
          a3 = v50;
        }
        else
        {
          a2 = (unsigned int)v15;
          a5 = (unsigned int)v22;
          v9 = v60;
          a6 = v62;
        }
      }
    }
    v58 = a5;
    if ( a1 == v7 )
      goto LABEL_52;
    v60 = *(_DWORD *)(a1 + 8);
    if ( v60 >> 1 != v59 )
    {
      v37 = sub_50217A0(a1, a2, a3: v59, a4: v9, a5, a6, a7: v48);
      if ( (v37 & 0x80000000) == 0 )
      {
        v41 = *(_QWORD *)(v8 + 40);
        v42 = *(_QWORD *)(v8 + 32);
        v43 = (v37 + 19LL) & 0x1FFFFFFF8LL;
        if ( v43 >= 0x20000 || (v44 = v41 + v43) > v42 )
        {
          v52 = v37;
          v56 = v37;
          sub_1EAA840(a1: v42, a2: v37, a3: v61, a4: v41, a5: v37);
          v37 = v56;
        }
        else
        {
          v45 = v61;
          *(_QWORD *)(v8 + 40) = v44;
          *(_QWORD *)v41 = v45;
          *(_DWORD *)(v41 + 8) = v37;
        }
        if ( v60 >= v37 )
          JUMPOUT(0x30A03AAAFLL);
        JUMPOUT(0x30A03AAA4LL);
      }
      v24 = sub_579A560(a1: v39, a2: v40, a3: v49, a4: v38, a5: v37);
      goto LABEL_49;
    }
    v46 = a1;
    if ( *(int *)(v8 + 16) <= 0 )
    {
      sub_277F280();
      return v49;
    }
    return v46;
  }
}
