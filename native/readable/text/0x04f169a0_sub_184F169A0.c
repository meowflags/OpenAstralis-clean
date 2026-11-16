// sub_4F169A0
// rva 0x04f169a0  size 934  section .text  group text
// window base 0x184f169a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F169A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  void (__fastcall *v23)(__int64, __int64, _DWORD *, _QWORD, _QWORD); // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 result; // rax
  __int64 v28; // rax
  _DWORD *v29; // rcx
  __int64 v30; // rax
  __int64 (__fastcall *v31)(__int64, __int64, _DWORD *); // rbp
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rax
  _DWORD *v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rsi
  int v44; // eax
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rax
  _DWORD *v48; // rdi
  __int64 v49; // rax
  __int64 (__fastcall *v50)(_DWORD *, __int64, _DWORD *); // r9
  unsigned int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rax
  _DWORD *v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rsi
  int v63; // eax
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rsi
  int v73; // edx
  int v74; // ecx
  int v75; // edi
  int v76; // esi
  int v77; // r8d
  int v78; // r9d
  __int64 v79; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v80; // [rsp+10h] [rbp-48h]
  int v81; // [rsp+18h] [rbp-40h]
  unsigned int v82; // [rsp+1Ch] [rbp-3Ch]
  _DWORD *v83; // [rsp+20h] [rbp-38h]
  __int64 v84; // [rsp+28h] [rbp-30h]
  unsigned int v85; // [rsp+30h] [rbp-28h]
  int v86; // [rsp+34h] [rbp-24h]
  void (__fastcall *v87)(__int64, __int64, _DWORD *, __int64, __int64); // [rsp+38h] [rbp-20h]
  int v88; // [rsp+44h] [rbp-14h]
  void (__fastcall *v89)(__int64, __int64, _DWORD *); // [rsp+48h] [rbp-10h]
  void (__fastcall *v90)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *); // [rsp+50h] [rbp-8h]

  v84 = a3;
  v83 = a5;
  if ( (unsigned __int64)&v79 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a5 != v8 )
  {
    v10 = *(unsigned int *)(a3 + 8);
    v82 = *a5 >> 3;
    v90 = (void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v82 + 98]);
    v90(a1, a2, a3: a5, a4: &v8[2 * v10], a5: &v8[2 * v10]);
    v13 = sub_4F10400(a1: v11, a2: v12, a3: v84);
    ((void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v7 + *(_QWORD *)&v8[2 * v82 + 88]))(
      a1: v14,
      a2: v15,
      a3: v83,
      a4: v82,
      a5: v13);
    v18 = v84;
    if ( *(_BYTE *)(v84 + 100) != 0 )
    {
      if ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v82 + 52]))(
             a1: v16,
             a2: v17,
             a3: v83) != 1 )
        JUMPOUT(0x309E2CA58LL);
      v19 = 4;
      v18 = v84;
    }
    else
    {
      if ( *(_BYTE *)(v84 + 99) != 0 )
        JUMPOUT(0x309E2CC90LL);
      v19 = 0;
    }
    if ( *(_BYTE *)(v18 + 101) != 0 )
      ++v19;
    if ( *(_BYTE *)(v18 + 97) != 0 )
      v19 += 16;
    v89 = (void (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v82 + 70]);
    v88 = v19;
    v89(a1: v16, a2: v17, a3: v83);
    v22 = *(unsigned int *)(v84 + 32);
    if ( (_DWORD)v22 == 0 )
      goto LABEL_31;
    v23 = (void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _QWORD))(v7 + *(_QWORD *)&v8[2 * v82 + 92]);
    v23(a1: v20, a2: v21, a3: v83, a4: v23, a5: (unsigned int)v8[2 * v22 + 2]);
    v26 = v84;
    result = *(unsigned int *)(v84 + 32);
    if ( (_DWORD)result == 0 )
    {
LABEL_32:
      sub_2771080();
      goto LABEL_33;
    }
    if ( v8[2 * result + 2] == 0 )
    {
      v46 = 0;
LABEL_23:
      if ( *(int *)(v9 + 16) <= 0 )
        return sub_277F280(a1: v24, a2: v25, a3: v26, a4: v46);
      return result;
    }
    v28 = (unsigned int)v8[2 * result + 3];
    v29 = &v8[2 * v28];
    if ( (_DWORD)v28 == 0 )
      goto LABEL_34;
    v30 = v8[2 * v28] >> 3;
    v81 = v30;
    v31 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v30 + 40]);
    v80 = v29;
    v32 = v31(a1: v24, a2: v25, a3: v29);
    ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64, _QWORD))v89)(a1: v34, a2: v35, a3: v83, a4: v33, a5: v32);
    v38 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v81 + 32]))(
            a1: v36,
            a2: v37,
            a3: v80);
    v90(a1: v40, a2: v41, a3: v83, a4: v39, a5: (_DWORD *)v38);
    v44 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v81 + 44]))(
            a1: v42,
            a2: v43,
            a3: v80);
    v87 = (void (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64))(v7 + *(_QWORD *)&v8[2 * v82 + 96]);
    if ( v44 == 0 )
    {
      v65 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v81 + 42]))(
              a1: v45,
              a2: v25,
              a3: v80);
      v87(a1: v67, a2: v68, a3: v83, a4: v66, a5: v65);
    }
    v46 = 1;
    while ( 1 )
    {
      v26 = v84;
      result = *(unsigned int *)(v84 + 32);
      if ( (_DWORD)result == 0 )
      {
LABEL_33:
        v86 = v46;
        sub_2771080();
LABEL_34:
        sub_2771080(a1: v24, a2: v25, a3: v26, a4: v29);
        goto LABEL_35;
      }
      v24 = (unsigned int)v8[2 * result + 2];
      if ( (int)v24 <= (int)v46 )
        goto LABEL_23;
      if ( (unsigned int)v24 <= (unsigned int)v46 )
        break;
      v47 = (unsigned int)v8[2 * result + 3 + v46];
      v48 = &v8[2 * v47];
      if ( (_DWORD)v47 == 0 )
        goto LABEL_37;
      v86 = v46;
      v49 = v8[2 * v47] >> 3;
      v81 = v49;
      v50 = (__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v49 + 40]);
      v80 = v48;
      v51 = v50(a1: v48, a2: v25, a3: v48);
      ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64, _QWORD))v89)(
        a1: v53,
        a2: v54,
        a3: v83,
        a4: v52,
        a5: v51);
      v57 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v81 + 32]))(
              a1: v55,
              a2: v56,
              a3: v80);
      v90(a1: v59, a2: v60, a3: v83, a4: v58, a5: (_DWORD *)v57);
      v63 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v81 + 44]))(
              a1: v61,
              a2: v62,
              a3: v80);
      v46 = (unsigned int)(v86 + 1);
      if ( v63 == 0 )
      {
LABEL_35:
        v85 = v46;
        v69 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v81 + 42]))(
                a1: v64,
                a2: v25,
                a3: v80);
        v87(a1: v71, a2: v72, a3: v83, a4: v70, a5: v69);
        v46 = v85;
      }
    }
    v86 = v46;
    sub_2771220(a1: v24, a2: v25, a3: (unsigned int)v46, a4: v46, a5: (unsigned int)v24);
LABEL_37:
    sub_2771080(a1: v48, a2: v25, a3: v26, a4: v46, a5: v83);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F16D60(a1: v75, a2: v76, a3: v73, a4: v74, a5: v77, a6: v78, a7);
  }
  sub_2771080();
LABEL_31:
  sub_2771080();
  goto LABEL_32;
}
