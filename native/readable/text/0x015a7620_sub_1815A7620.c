// sub_15A7620
// rva 0x015a7620  size 211  section .text  group text
// window base 0x1815a7620: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A7620(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned int v24; // ebp
  _DWORD *v25; // r8
  int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rcx
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
  __int64 v57; // rdx
  __int64 v58; // rdi
  __int64 v59; // rsi
  int v60; // [rsp-14h] [rbp-C0h] BYREF
  __int64 v61; // [rsp-Ch] [rbp-B8h]
  __int64 v62; // [rsp-4h] [rbp-B0h]
  __int64 v63; // [rsp+4h] [rbp-A8h]
  _DWORD *v64; // [rsp+Ch] [rbp-A0h]
  _DWORD *v65; // [rsp+14h] [rbp-98h]
  __int64 v66; // [rsp+1Ch] [rbp-90h]
  _DWORD *v67; // [rsp+24h] [rbp-88h]
  _BYTE v68[68]; // [rsp+2Ch] [rbp-80h] BYREF
  int v69; // [rsp+70h] [rbp-3Ch]
  unsigned int v70; // [rsp+74h] [rbp-38h]
  int v71; // [rsp+78h] [rbp-34h]
  void (__fastcall *v72)(__int64, __int64, _DWORD *, __int64, __int64); // [rsp+7Ch] [rbp-30h]
  unsigned int v73; // [rsp+84h] [rbp-28h]
  unsigned int v74; // [rsp+88h] [rbp-24h]
  _BYTE *v75; // [rsp+8Ch] [rbp-20h]
  __int64 v76; // [rsp+94h] [rbp-18h] BYREF
  char v77[8]; // [rsp+9Ch] [rbp-10h] BYREF
  _DWORD *v78; // [rsp+A4h] [rbp-8h]

  if ( (unsigned __int64)&v76 > *(_QWORD *)(v5 + 8) )
  {
    v6 = *(unsigned int *)(a3 + 24);
    if ( (_DWORD)v6 != 0 )
    {
      result = v4 + 8 * v6;
    }
    else
    {
      result = *(_QWORD *)(v5 + 40);
      if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v5 + 32) )
      {
        v78 = (_DWORD *)a3;
        result = sub_1EAA920(a1, a2, a3: 35801536);
        a3 = (unsigned __int64)v78;
      }
      else
      {
        *(_QWORD *)(v5 + 40) = result + 16;
        *(_DWORD *)result = 35801536;
        *(_DWORD *)(result + 4) = 0;
        *(_QWORD *)(result + 8) = 0;
      }
      *(_DWORD *)(result + 4) = (a3 - v4) >> 3;
      *(_DWORD *)(a3 + 24) = (unsigned __int64)(result - v4) >> 3;
      if ( (*(_DWORD *)a3 & 2) != 0 )
      {
        v8 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v8) >> 9) + 0x38) != 0 )
          *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v8) >> 9) + 0x38) = 0;
      }
    }
    if ( *(int *)(v5 + 16) <= 0 )
    {
      v78 = (_DWORD *)a3;
      return sub_277F280();
    }
    return result;
  }
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
  if ( (unsigned __int64)&v60 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
  }
  else
  {
    v67 = (_DWORD *)sub_5837940(a1: v9, a2: v10, a3: v4 + 35801984);
    v75 = v68;
    sub_2839540(a1: v11, a2: v12, a3: v68, a4: v68, a5: 65, a6: 0);
    sub_15A7D80(a1: v13, a2: v14, a3: v75);
    v15 = sub_6574340();
    v66 = v15;
    v18 = *(unsigned int *)(v15 + 8);
    v74 = v18;
    v19 = 34161576;
    if ( (_DWORD)v18 != 0 )
    {
      v20 = *(_QWORD *)(v5 + 40);
      if ( (unsigned __int64)(v20 + 24) > *(_QWORD *)(v5 + 32) )
      {
        v20 = sub_1EAA920(a1: v16, a2: v17, a3: 34161576);
        v15 = v66;
      }
      else
      {
        *(_QWORD *)(v5 + 40) = v20 + 24;
        *(_DWORD *)v20 = 34161576;
        *(_DWORD *)(v20 + 4) = 0;
        *(_QWORD *)(v20 + 8) = 0;
        *(_QWORD *)(v20 + 16) = 0;
      }
      v65 = (_DWORD *)v20;
      v64 = (_DWORD *)(v4 + 376614056);
      *(_DWORD *)(v20 + 8) = 47045786;
      v63 = v4 + 8LL * *(unsigned int *)(v15 + 12);
      v21 = sub_15914E0(
              a1: (_DWORD *)v20,
              a2: v63,
              a3: v4 + 376614056,
              a4: v18,
              a5: v63,
              a6: (__int64)v75,
              a7: v60,
              a8: v61,
              a9: v62,
              a10: v63,
              a11: (int)v64,
              a12: (__int64)v65);
      v19 = v3 + *(_QWORD *)(v4 + 8LL * (*v67 >> 3) + 112);
      v72 = (void (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64))v19;
      if ( v21 != 0 )
        ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64))v19)(
          a1: v16,
          a2: v22,
          a3: v67,
          a4: v67,
          a5: v63);
      v23 = 1;
      while ( 1 )
      {
        v24 = (unsigned int)v64;
        v25 = v65;
        v17 = (__int64)v75;
        if ( (int)v74 <= (int)v23 )
          break;
        if ( v74 <= (unsigned int)v23 )
        {
          sub_2771220(a1: v16, a2: v75, a3: (unsigned int)v23, a4: v65, a5: v74);
          goto LABEL_63;
        }
        v63 = v4 + 8LL * *(unsigned int *)(v66 + 4 * v23 + 12);
        v71 = v23;
        v26 = sub_15914E0(
                a1: v65,
                a2: (__int64)v75,
                a3: (__int64)v64,
                a4: v74,
                a5: v63,
                a6: (__int64)v75,
                a7: v60,
                a8: v61,
                a9: v62,
                a10: v63,
                a11: (int)v64,
                a12: (__int64)v65);
        v28 = (unsigned int)(v71 + 1);
        if ( v26 != 0 )
        {
          v70 = v71 + 1;
          v72(a1: v16, a2: v27, a3: v67, a4: v28, a5: v63);
          v23 = v70;
        }
        else
        {
          v23 = (unsigned int)v28;
        }
      }
      v73 = v23;
    }
    else
    {
      v25 = *(_DWORD **)(v5 + 40);
      if ( (unsigned __int64)(v25 + 6) > *(_QWORD *)(v5 + 32) )
      {
        v25 = (_DWORD *)sub_1EAA920(a1: v16, a2: v17, a3: 34161576);
      }
      else
      {
        *(_QWORD *)(v5 + 40) = v25 + 6;
        *v25 = 34161576;
        v25[1] = 0;
        *((_QWORD *)v25 + 1) = 0;
        *((_QWORD *)v25 + 2) = 0;
      }
      v25[2] = 47045786;
      v73 = 0;
    }
    if ( v25[3] == 0 )
    {
      if ( *(int *)(v5 + 16) <= 0 )
        sub_277F280(a1: v16, a2: v17, a3: v19);
      return (__int64)v67;
    }
  }
  v64 = v25;
  v29 = sub_576AEC0(a1: v16, a2: v17, a3: v25);
  v31 = *(unsigned int *)(v29 + 4);
  v32 = v4 + 57669648;
  if ( (_DWORD)v31 != 0 )
  {
    v33 = *(_DWORD *)(v4 + 8 * v31 + 8);
    if ( v33 == 0 )
      goto LABEL_46;
    v24 = *(char *)(v29 + 12);
    v34 = *(unsigned int *)(v4 + 374343896);
    v35 = (v33 >> *(_BYTE *)(v29 + 12)) + 64;
    v36 = 34082880;
    v37 = 34082880;
    if ( (int)v35 >= 0 )
    {
      v38 = v24;
      v39 = (unsigned int)((_DWORD)v35 << v24);
      if ( (int)v39 < 0 )
        goto LABEL_51;
      v40 = *(_QWORD *)(v5 + 40);
      v41 = ((unsigned int)v39 + 19LL) & 0x1FFFFFFF8LL;
      if ( v41 >= 0x20000 || (v56 = v40 + v41) > *(_QWORD *)(v5 + 32) )
      {
        v71 = v39;
        v70 = v24;
        v63 = v4 + 57669648;
        v65 = (_DWORD *)v29;
        v40 = sub_1EAA840(a1: v39, a2: v34, a3: 34082368, a4: 34082368, a5: (unsigned int)v39);
        v24 = v70;
        v32 = v63;
      }
      else
      {
        *(_QWORD *)(v5 + 40) = v56;
        *(_QWORD *)v40 = 34082368;
        *(_DWORD *)(v40 + 8) = v39;
        v71 = v39;
        v65 = (_DWORD *)v29;
      }
      v70 = v24;
      v63 = v40;
      sub_4FF2C40(a1: v24, a2: v34, a3: v32, a4: v63, a5: v63, a6: 0);
      sub_4FF2C40(a1: v70, a2: v43, a3: v65, a4: v42, a5: v63, a6: 64);
      v44 = v70;
      v45 = 0;
      v46 = v63;
      v47 = 0;
      while ( 1 )
      {
        v48 = *(_QWORD *)(v5 + 40);
        v49 = v48 + 24;
        if ( (unsigned __int64)(v48 + 24) > *(_QWORD *)(v5 + 32) )
        {
          v70 = v44;
          v71 = v45;
          v63 = v46;
          v69 = v47;
          v48 = sub_1EAA920(a1: v30, a2: v49, a3: 34082680);
          LOBYTE(v44) = v70;
          v45 = v71;
          v46 = v63;
          LOBYTE(v47) = v69;
        }
        else
        {
          *(_QWORD *)(v5 + 40) = v49;
          *(_DWORD *)v48 = 34082680;
          *(_DWORD *)(v48 + 4) = 0;
          *(_QWORD *)(v48 + 8) = 0;
          *(_QWORD *)(v48 + 16) = 0;
        }
        *(_BYTE *)(v48 + 13) = v47;
        *(_BYTE *)(v48 + 12) = v44;
        *(_DWORD *)(v48 + 8) = v45;
        *(_DWORD *)(v48 + 4) = (unsigned __int64)(v46 - v4) >> 3;
        v29 = sub_28C1C40(a1: v30, a2: v49, a3: v48);
LABEL_46:
        v65 = (_DWORD *)v29;
        v47 = *(unsigned __int8 *)(v4 + 57669661);
        v46 = v4 + 376614072;
        v44 = 0;
        v45 = 1602849545;
      }
    }
    v70 = *(char *)(v29 + 12);
    v65 = (_DWORD *)v29;
    v50 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v50 + 40) > *(_QWORD *)(v5 + 32) )
    {
LABEL_63:
      v71 = v35;
      HIDWORD(v62) = v34;
      v50 = sub_1EAA920(a1: v35, a2: v34, a3: v37);
      v34 = HIDWORD(v62);
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v50 + 40;
      *(_DWORD *)v50 = 34082880;
      *(_DWORD *)(v50 + 4) = 0;
      *(_QWORD *)(v50 + 8) = 0;
      *(_QWORD *)(v50 + 16) = 0;
      *(_QWORD *)(v50 + 24) = 0;
      *(_QWORD *)(v50 + 32) = 0;
      v71 = v35;
    }
    *(_DWORD *)(v50 + 20) = 46923644;
    *(_DWORD *)(v50 + 16) = v34;
    *(_DWORD *)(v50 + 12) = (unsigned __int64)(v50 - v4) >> 3;
    v63 = v50;
    sub_503B9A0(a1: v35, a2: v34, a3: v50, a4: v36, a5: 0);
    v54 = v63;
    *(_DWORD *)(v63 + 8) = 46004603;
    if ( (*(_DWORD *)v54 & 2) != 0 )
    {
      v51 = (v54 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v54 & 0xFFFFFFFFFFF80000LL) + ((v54 - v51) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v54 & 0xFFFFFFFFFFF80000LL) + ((v54 - v51) >> 9) + 0x38) = 0;
    }
    while ( 1 )
    {
      v29 = sub_2769900(a1: v52, a2: v53, a3: v54, a4: v51, a5: v77);
LABEL_51:
      v71 = v39;
      v70 = v24;
      v65 = (_DWORD *)v29;
      v55 = *(_QWORD *)(v5 + 40);
      if ( (unsigned __int64)(v55 + 40) > *(_QWORD *)(v5 + 32) )
      {
        HIDWORD(v62) = v34;
        v55 = sub_1EAA920(a1: v39, a2: v34, a3: v37);
        v34 = HIDWORD(v62);
      }
      else
      {
        *(_QWORD *)(v5 + 40) = v55 + 40;
        *(_DWORD *)v55 = 34082880;
        *(_DWORD *)(v55 + 4) = 0;
        *(_QWORD *)(v55 + 8) = 0;
        *(_QWORD *)(v55 + 16) = 0;
        *(_QWORD *)(v55 + 24) = 0;
        *(_QWORD *)(v55 + 32) = 0;
      }
      *(_DWORD *)(v55 + 20) = 46923644;
      *(_DWORD *)(v55 + 16) = v34;
      *(_DWORD *)(v55 + 12) = (unsigned __int64)(v55 - v4) >> 3;
      v63 = v55;
      sub_503B9A0(a1: v39, a2: v34, a3: v55, a4: v38, a5: 0);
      v54 = v63;
      *(_DWORD *)(v63 + 8) = 46004603;
      if ( (*(_DWORD *)v54 & 2) != 0 )
      {
        v51 = (v54 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v54 & 0xFFFFFFFFFFF80000LL) + ((v54 - v51) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v54 & 0xFFFFFFFFFFF80000LL) + ((v54 - v51) >> 9) + 0x38) = 0;
      }
    }
  }
  sub_2771080(a1: v30, a2: v67, a3: v66, a4: v73, a5: v64);
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
  return sub_15A7D80(a1: v58, a2: v59, a3: v57);
}
