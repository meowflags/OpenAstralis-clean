// sub_1815A7700
// rva 0x015a7700  size 1649  section .text  group text
// window base 0x1815a7700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1815A7700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // ebp
  _DWORD *v24; // r8
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rbx
  unsigned int v33; // edx
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rdx
  unsigned __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rsi
  unsigned int v44; // ebp
  int v45; // ecx
  __int64 v46; // rax
  int v47; // edx
  __int64 v48; // rbx
  __int64 v49; // rsi
  __int64 v50; // r8
  unsigned __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // r8
  __int64 v55; // r8
  unsigned __int64 v56; // r9
  int v57; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+8h] [rbp-A0h]
  __int64 v59; // [rsp+10h] [rbp-98h]
  __int64 v60; // [rsp+18h] [rbp-90h]
  _DWORD *v61; // [rsp+20h] [rbp-88h]
  _DWORD *v62; // [rsp+28h] [rbp-80h]
  __int64 v63; // [rsp+30h] [rbp-78h]
  _DWORD *v64; // [rsp+38h] [rbp-70h]
  _BYTE v65[68]; // [rsp+40h] [rbp-68h] BYREF
  int v66; // [rsp+84h] [rbp-24h]
  unsigned int v67; // [rsp+88h] [rbp-20h]
  int v68; // [rsp+8Ch] [rbp-1Ch]
  void (__fastcall *v69)(__int64, __int64, _DWORD *, __int64, __int64); // [rsp+90h] [rbp-18h]
  unsigned int v70; // [rsp+98h] [rbp-10h]
  unsigned int v71; // [rsp+9Ch] [rbp-Ch]
  _BYTE *v72; // [rsp+A0h] [rbp-8h]

  if ( (unsigned __int64)&v57 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_24;
  }
  v64 = (_DWORD *)MEMORY[0x185837940](a1, a2, a3: v8 + 35801984);
  v72 = v65;
  MEMORY[0x182839540](a1: v10, a2: v11, a3: v65, a4: v65, a5: 65, a6: 0);
  sub_1815A7D80(a1: v12, a2: v13, a3: v72);
  v14 = MEMORY[0x186574340]();
  v63 = v14;
  v17 = *(unsigned int *)(v14 + 8);
  v71 = v17;
  v18 = 34161576;
  if ( (_DWORD)v17 != 0 )
  {
    v19 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v19 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v19 = MEMORY[0x181EAA920](a1: v15, a2: v16, a3: 34161576);
      v14 = v63;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v19 + 24;
      *(_DWORD *)v19 = 34161576;
      *(_DWORD *)(v19 + 4) = 0;
      *(_QWORD *)(v19 + 8) = 0;
      *(_QWORD *)(v19 + 16) = 0;
    }
    v62 = (_DWORD *)v19;
    v61 = (_DWORD *)(v8 + 376614056);
    *(_DWORD *)(v19 + 8) = 47045786;
    v60 = v8 + 8LL * *(unsigned int *)(v14 + 12);
    v20 = sub_1815914E0(
            a1: (_DWORD *)v19,
            a2: v60,
            a3: v8 + 376614056,
            a4: v17,
            a5: v60,
            a6: (__int64)v72,
            a7: v57,
            a8: v58,
            a9: v59,
            a10: v60,
            a11: (int)v61,
            a12: (__int64)v62);
    v18 = v7 + *(_QWORD *)(v8 + 8LL * (*v64 >> 3) + 112);
    v69 = (void (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64))v18;
    if ( v20 != 0 )
      ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64))v18)(
        a1: v15,
        a2: v21,
        a3: v64,
        a4: v64,
        a5: v60);
    v22 = 1;
    while ( 1 )
    {
      v23 = (unsigned int)v61;
      v24 = v62;
      v16 = (__int64)v72;
      if ( (int)v71 <= (int)v22 )
        break;
      if ( v71 <= (unsigned int)v22 )
      {
        MEMORY[0x182771220](a1: v15, a2: v72, a3: (unsigned int)v22, a4: v62, a5: v71);
        goto LABEL_51;
      }
      v60 = v8 + 8LL * *(unsigned int *)(v63 + 4 * v22 + 12);
      v68 = v22;
      v25 = sub_1815914E0(
              a1: v62,
              a2: (__int64)v72,
              a3: (__int64)v61,
              a4: v71,
              a5: v60,
              a6: (__int64)v72,
              a7: v57,
              a8: v58,
              a9: v59,
              a10: v60,
              a11: (int)v61,
              a12: (__int64)v62);
      v27 = (unsigned int)(v68 + 1);
      if ( v25 != 0 )
      {
        v67 = v68 + 1;
        v69(a1: v15, a2: v26, a3: v64, a4: v27, a5: v60);
        v22 = v67;
      }
      else
      {
        v22 = (unsigned int)v27;
      }
    }
    v70 = v22;
  }
  else
  {
    v24 = *(_DWORD **)(v9 + 40);
    if ( (unsigned __int64)(v24 + 6) > *(_QWORD *)(v9 + 32) )
    {
      v24 = (_DWORD *)MEMORY[0x181EAA920](a1: v15, a2: v16, a3: 34161576);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v24 + 6;
      *v24 = 34161576;
      v24[1] = 0;
      *((_QWORD *)v24 + 1) = 0;
      *((_QWORD *)v24 + 2) = 0;
    }
    v24[2] = 47045786;
    v70 = 0;
  }
  if ( v24[3] != 0 )
  {
LABEL_24:
    v61 = v24;
    v29 = MEMORY[0x18576AEC0](a1: v15, a2: v16, a3: v24);
    v31 = *(unsigned int *)(v29 + 4);
    v32 = v8 + 57669648;
    if ( (_DWORD)v31 == 0 )
    {
      MEMORY[0x182771080](a1: v30, a2: v64, a3: v63, a4: v70, a5: v61);
      JUMPOUT(0x1815A7D71LL);
    }
    v33 = *(_DWORD *)(v8 + 8 * v31 + 8);
    if ( v33 == 0 )
      goto LABEL_34;
    v23 = *(char *)(v29 + 12);
    v34 = *(unsigned int *)(v8 + 374343896);
    v35 = (v33 >> *(_BYTE *)(v29 + 12)) + 64;
    v36 = 34082880;
    v37 = 34082880;
    if ( (int)v35 >= 0 )
    {
      v38 = v23;
      v39 = (unsigned int)((_DWORD)v35 << v23);
      if ( (int)v39 < 0 )
        goto LABEL_39;
      v40 = *(_QWORD *)(v9 + 40);
      v41 = ((unsigned int)v39 + 19LL) & 0x1FFFFFFF8LL;
      if ( v41 >= 0x20000 || (v56 = v40 + v41) > *(_QWORD *)(v9 + 32) )
      {
        v68 = v39;
        v67 = v23;
        v60 = v8 + 57669648;
        v62 = (_DWORD *)v29;
        v40 = MEMORY[0x181EAA840](a1: v39, a2: v34, a3: 34082368, a4: 34082368, a5: (unsigned int)v39);
        v23 = v67;
        v32 = v60;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v56;
        *(_QWORD *)v40 = 34082368;
        *(_DWORD *)(v40 + 8) = v39;
        v68 = v39;
        v62 = (_DWORD *)v29;
      }
      v67 = v23;
      v60 = v40;
      MEMORY[0x184FF2C40](a1: v23, a2: v34, a3: v32, a4: v60, a5: v60, a6: 0);
      MEMORY[0x184FF2C40](a1: v67, a2: v43, a3: v62, a4: v42, a5: v60, a6: 64);
      v44 = v67;
      v45 = 0;
      v46 = v60;
      v47 = 0;
      while ( 1 )
      {
        v48 = *(_QWORD *)(v9 + 40);
        v49 = v48 + 24;
        if ( (unsigned __int64)(v48 + 24) > *(_QWORD *)(v9 + 32) )
        {
          v67 = v44;
          v68 = v45;
          v60 = v46;
          v66 = v47;
          v48 = MEMORY[0x181EAA920](a1: v30, a2: v49, a3: 34082680);
          LOBYTE(v44) = v67;
          v45 = v68;
          v46 = v60;
          LOBYTE(v47) = v66;
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v49;
          *(_DWORD *)v48 = 34082680;
          *(_DWORD *)(v48 + 4) = 0;
          *(_QWORD *)(v48 + 8) = 0;
          *(_QWORD *)(v48 + 16) = 0;
        }
        *(_BYTE *)(v48 + 13) = v47;
        *(_BYTE *)(v48 + 12) = v44;
        *(_DWORD *)(v48 + 8) = v45;
        *(_DWORD *)(v48 + 4) = (unsigned __int64)(v46 - v8) >> 3;
        v29 = MEMORY[0x1828C1C40](a1: v30, a2: v49, a3: v48);
LABEL_34:
        v62 = (_DWORD *)v29;
        v47 = *(unsigned __int8 *)(v8 + 57669661);
        v46 = v8 + 376614072;
        v44 = 0;
        v45 = 1602849545;
      }
    }
    v67 = *(char *)(v29 + 12);
    v62 = (_DWORD *)v29;
    v50 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v50 + 40) > *(_QWORD *)(v9 + 32) )
    {
LABEL_51:
      v68 = v35;
      HIDWORD(v59) = v34;
      v50 = MEMORY[0x181EAA920](a1: v35, a2: v34, a3: v37);
      v34 = HIDWORD(v59);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v50 + 40;
      *(_DWORD *)v50 = 34082880;
      *(_DWORD *)(v50 + 4) = 0;
      *(_QWORD *)(v50 + 8) = 0;
      *(_QWORD *)(v50 + 16) = 0;
      *(_QWORD *)(v50 + 24) = 0;
      *(_QWORD *)(v50 + 32) = 0;
      v68 = v35;
    }
    *(_DWORD *)(v50 + 20) = 46923644;
    *(_DWORD *)(v50 + 16) = v34;
    *(_DWORD *)(v50 + 12) = (unsigned __int64)(v50 - v8) >> 3;
    v60 = v50;
    MEMORY[0x18503B9A0](a1: v35, a2: v34, a3: v50, a4: v36, a5: 0);
    v54 = v60;
    *(_DWORD *)(v60 + 8) = 46004603;
    if ( (*(_DWORD *)v54 & 2) != 0 )
    {
      v51 = (v54 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v54 & 0xFFFFFFFFFFF80000LL) + ((v54 - v51) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v54 & 0xFFFFFFFFFFF80000LL) + ((v54 - v51) >> 9) + 0x38) = 0;
    }
    while ( 1 )
    {
      v29 = MEMORY[0x182769900](a1: v52, a2: v53, a3: v54, a4: v51, a5: &a7);
LABEL_39:
      v68 = v39;
      v67 = v23;
      v62 = (_DWORD *)v29;
      v55 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v55 + 40) > *(_QWORD *)(v9 + 32) )
      {
        HIDWORD(v59) = v34;
        v55 = MEMORY[0x181EAA920](a1: v39, a2: v34, a3: v37);
        v34 = HIDWORD(v59);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v55 + 40;
        *(_DWORD *)v55 = 34082880;
        *(_DWORD *)(v55 + 4) = 0;
        *(_QWORD *)(v55 + 8) = 0;
        *(_QWORD *)(v55 + 16) = 0;
        *(_QWORD *)(v55 + 24) = 0;
        *(_QWORD *)(v55 + 32) = 0;
      }
      *(_DWORD *)(v55 + 20) = 46923644;
      *(_DWORD *)(v55 + 16) = v34;
      *(_DWORD *)(v55 + 12) = (unsigned __int64)(v55 - v8) >> 3;
      v60 = v55;
      MEMORY[0x18503B9A0](a1: v39, a2: v34, a3: v55, a4: v38, a5: 0);
      v54 = v60;
      *(_DWORD *)(v60 + 8) = 46004603;
      if ( (*(_DWORD *)v54 & 2) != 0 )
      {
        v51 = (v54 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v54 & 0xFFFFFFFFFFF80000LL) + ((v54 - v51) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v54 & 0xFFFFFFFFFFF80000LL) + ((v54 - v51) >> 9) + 0x38) = 0;
      }
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v15, a2: v16, a3: v18);
  return v64;
}
