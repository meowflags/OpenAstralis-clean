// sub_181ECE8C0
// rva 0x01ece8c0  size 2023  section .text  group text
// window base 0x181ece8c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_181ECE8C0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  _DWORD *result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  _DWORD *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  _DWORD *v36; // rbx
  unsigned int v37; // edx
  unsigned int v38; // ebp
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rdx
  unsigned __int64 v45; // r9
  __int64 v46; // rcx
  unsigned __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rcx
  unsigned __int64 v55; // rdi
  char v56; // bl
  int v57; // ebp
  _DWORD *v58; // rsi
  unsigned __int64 v59; // rsi
  unsigned __int64 v60; // rcx
  int v61; // edx
  __int64 v62; // r8
  unsigned __int64 v63; // r8
  __int64 v64; // r8
  unsigned __int64 v65; // r8
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rcx
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rdx
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rbx
  int v74; // edx
  int v75; // ecx
  int v76; // edi
  int v77; // esi
  int v78; // r8d
  int v79; // r9d
  char v80; // [rsp+0h] [rbp-78h] BYREF
  _DWORD *v81; // [rsp+10h] [rbp-68h]
  _DWORD *v82; // [rsp+18h] [rbp-60h]
  __int64 v83; // [rsp+20h] [rbp-58h]
  _DWORD *v84; // [rsp+28h] [rbp-50h]
  unsigned int v85; // [rsp+34h] [rbp-44h]
  __int64 v86; // [rsp+38h] [rbp-40h]
  _DWORD *v87; // [rsp+40h] [rbp-38h]
  int v88; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v89; // [rsp+50h] [rbp-28h]
  int v90; // [rsp+54h] [rbp-24h]
  int v91; // [rsp+58h] [rbp-20h]
  unsigned int v92; // [rsp+5Ch] [rbp-1Ch]
  __int64 (*v93)(void); // [rsp+60h] [rbp-18h]
  __int64 v94; // [rsp+68h] [rbp-10h]
  __int64 v95; // [rsp+70h] [rbp-8h]

  v87 = a3;
  v86 = a5;
  if ( (unsigned __int64)&v80 <= *(_QWORD *)(v9 + 8) )
  {
    sub_181EB84E0(a1, a2, (__int64)a3, a4, a5, a6, a7: v80);
    goto LABEL_72;
  }
  v85 = *a3 >> 3;
  v93 = (__int64 (*)(void))(v7 + *(_QWORD *)(v8 + 8LL * v85 + 112));
  if ( v93() != v8 )
  {
    v28 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))v93)(a1: v11, a2: v12, a3: v87);
    if ( v28 == v8 || *(_DWORD *)(v28 + 20) != 0 )
    {
      v29 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))v93)(a1: v11, a2: v12, a3: v87);
      v82 = (_DWORD *)(v8 + 353301280);
      if ( v29 == (_DWORD *)v8 )
      {
        v33 = v8 + 353301280;
      }
      else
      {
        v32 = *(_QWORD *)(v8 + 8LL * (*v29 >> 3) + 104);
        v84 = v29;
        v33 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + v32))(a1: v30, a2: v31, a3: v29);
      }
      if ( v33 == v8 )
        v34 = (__int64)v82;
      else
        v34 = v33;
      v35 = *(unsigned int *)(v34 + 4);
      v36 = (_DWORD *)(v8 + 58179560);
      if ( (_DWORD)v35 != 0 )
      {
        v37 = *(_DWORD *)(v8 + 8 * v35 + 8);
        if ( v37 != 0 )
        {
          v38 = *(char *)(v34 + 12);
          v39 = *(unsigned int *)(v8 + 374343896);
          v83 = v34;
          v40 = (v37 >> v38) + 23;
          v41 = 34082880;
          if ( (int)v40 < 0 )
          {
            v89 = v38;
            v82 = (_DWORD *)v33;
            v62 = *(_QWORD *)(v9 + 40);
            if ( (unsigned __int64)(v62 + 40) > *(_QWORD *)(v9 + 32) )
            {
              v88 = (v37 >> v38) + 23;
              v85 = v39;
              v62 = sub_181EAA920(a1: v40, a2: v39, a3: 34082880);
              v39 = v85;
            }
            else
            {
              *(_QWORD *)(v9 + 40) = v62 + 40;
              *(_DWORD *)v62 = 34082880;
              *(_DWORD *)(v62 + 4) = 0;
              *(_QWORD *)(v62 + 8) = 0;
              *(_QWORD *)(v62 + 16) = 0;
              *(_QWORD *)(v62 + 24) = 0;
              *(_QWORD *)(v62 + 32) = 0;
              v88 = (v37 >> v38) + 23;
            }
            *(_DWORD *)(v62 + 20) = 46923644;
            *(_DWORD *)(v62 + 16) = v39;
            *(_DWORD *)(v62 + 12) = (unsigned __int64)(v62 - v8) >> 3;
            v81 = (_DWORD *)v62;
            MEMORY[0x18503B9A0](a1: v40, a2: v39, a3: v62, a4: v41, a5: 0);
            v63 = (unsigned __int64)v81;
            v81[2] = 46004603;
            if ( (*(_DWORD *)v63 & 2) != 0 )
            {
              v67 = (v63 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)((v63 & 0xFFFFFFFFFFF80000LL) + ((v63 - v67) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v63 & 0xFFFFFFFFFFF80000LL) + ((v63 - v67) >> 9) + 0x38) = 0;
              v60 = v63;
            }
            else
            {
              v60 = v63;
            }
            goto LABEL_31;
          }
          v42 = v38;
          v43 = (unsigned int)((_DWORD)v40 << v38);
          if ( (int)v43 < 0 )
          {
            v88 = v43;
            v89 = v38;
            v82 = (_DWORD *)v33;
            v64 = *(_QWORD *)(v9 + 40);
            if ( (unsigned __int64)(v64 + 40) > *(_QWORD *)(v9 + 32) )
            {
              v85 = v39;
              v64 = sub_181EAA920(a1: v43, a2: v39, a3: 34082880);
              v39 = v85;
            }
            else
            {
              *(_QWORD *)(v9 + 40) = v64 + 40;
              *(_DWORD *)v64 = 34082880;
              *(_DWORD *)(v64 + 4) = 0;
              *(_QWORD *)(v64 + 8) = 0;
              *(_QWORD *)(v64 + 16) = 0;
              *(_QWORD *)(v64 + 24) = 0;
              *(_QWORD *)(v64 + 32) = 0;
            }
            *(_DWORD *)(v64 + 20) = 46923644;
            *(_DWORD *)(v64 + 16) = v39;
            *(_DWORD *)(v64 + 12) = (unsigned __int64)(v64 - v8) >> 3;
            v81 = (_DWORD *)v64;
            MEMORY[0x18503B9A0](a1: v43, a2: v39, a3: v64, a4: v42, a5: 0);
            v65 = (unsigned __int64)v81;
            v81[2] = 46004603;
            if ( (*(_DWORD *)v65 & 2) != 0 )
            {
              v68 = (v65 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)((v65 & 0xFFFFFFFFFFF80000LL) + ((v65 - v68) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v65 & 0xFFFFFFFFFFF80000LL) + ((v65 - v68) >> 9) + 0x38) = 0;
              v60 = v65;
            }
            else
            {
              v60 = v65;
            }
            goto LABEL_31;
          }
          v44 = *(_QWORD *)(v9 + 40);
          v45 = ((unsigned int)v43 + 19LL) & 0x1FFFFFFF8LL;
          v46 = 34082368;
          if ( v45 >= 0x20000 || (v47 = v44 + v45) > *(_QWORD *)(v9 + 32) )
          {
            v88 = v43;
            v89 = v38;
            v81 = (_DWORD *)(v8 + 58179560);
            v82 = (_DWORD *)v33;
            v44 = sub_181EAA840(a1: v43, a2: v39, a3: 34082368, a4: 34082368, a5: v43);
            v38 = v89;
            v36 = v81;
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v47;
            *(_QWORD *)v44 = 34082368;
            *(_DWORD *)(v44 + 8) = v43;
            v88 = v43;
            v82 = (_DWORD *)v33;
          }
          v89 = v38;
          v81 = (_DWORD *)v44;
          MEMORY[0x184FF2C40](a1: v38, a2: v81, a3: v36, a4: v46, a5: v81, a6: 0);
          MEMORY[0x184FF2C40](a1: v89, a2: v49, a3: v83, a4: v48, a5: v81, a6: 23);
          v94 = v7;
          v92 = v89;
          v91 = 0;
          v95 = v7;
          v84 = v81;
          v90 = 0;
        }
        else
        {
          v82 = (_DWORD *)v33;
          v61 = *(unsigned __int8 *)(v8 + 58179573);
          v92 = 0;
          v91 = -357439681;
          v84 = (_DWORD *)(v8 + 376660056);
          v90 = v61;
        }
        v50 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v50 + 40) > *(_QWORD *)(v9 + 32) )
        {
          v50 = sub_181EAA920(a1: v30, a2: v31, a3: 34171568);
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v50 + 40;
          *(_DWORD *)v50 = 34171568;
          *(_DWORD *)(v50 + 4) = 0;
          *(_QWORD *)(v50 + 8) = 0;
          *(_QWORD *)(v50 + 16) = 0;
          *(_QWORD *)(v50 + 24) = 0;
          *(_QWORD *)(v50 + 32) = 0;
        }
        v82 = (_DWORD *)v50;
        *(_DWORD *)(v50 + 20) = 46923644;
        *(_DWORD *)(v50 + 16) = *(_DWORD *)(v8 + 374343896);
        *(_DWORD *)(v50 + 12) = (unsigned __int64)(v50 - v8) >> 3;
        v51 = MEMORY[0x18503B9A0](a1: v30, a2: v31, a3: v50, a4: v50, a5: 0);
        v54 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v54 + 24) > *(_QWORD *)(v9 + 32) )
        {
          v81 = (_DWORD *)v51;
          v54 = sub_181EAA920(a1: v52, a2: v53, a3: 34082680);
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v54 + 24;
          *(_DWORD *)v54 = 34082680;
          *(_DWORD *)(v54 + 4) = 0;
          *(_QWORD *)(v54 + 8) = 0;
          *(_QWORD *)(v54 + 16) = 0;
        }
        v55 = (unsigned __int64)v82;
        v56 = v92;
        v57 = v91;
        v58 = v84;
        *(_BYTE *)(v54 + 13) = v90;
        *(_BYTE *)(v54 + 12) = v56;
        *(_DWORD *)(v54 + 8) = v57;
        v59 = ((unsigned __int64)v58 - v8) >> 3;
        *(_DWORD *)(v54 + 4) = v59;
        *(_DWORD *)(v55 + 8) = (unsigned __int64)(v54 - v8) >> 3;
        if ( (*(_DWORD *)v55 & 2) != 0 )
        {
          v66 = (v55 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v55 & 0xFFFFFFFFFFF80000LL) + ((v55 - v66) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v55 & 0xFFFFFFFFFFF80000LL) + ((v55 - v66) >> 9) + 0x38) = 0;
          v60 = v55;
        }
        else
        {
          v60 = v55;
        }
LABEL_31:
        result = (_DWORD *)MEMORY[0x182769900](a1: v55, a2: v59, a3: v60, a4: v60, a5: &a7);
LABEL_32:
        if ( *(int *)(v9 + 16) <= 0 )
        {
          v84 = result;
          MEMORY[0x18277F280]();
          return v84;
        }
        return result;
      }
      goto LABEL_73;
    }
  }
  v13 = (unsigned int)v87[2];
  if ( (_DWORD)v13 == 0 )
  {
LABEL_72:
    MEMORY[0x182771080]();
LABEL_73:
    MEMORY[0x182771080]();
LABEL_74:
    if ( v86 == v8 )
    {
      MEMORY[0x182771080](a1: v17, a2: v18, a3: v87);
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
      return (_DWORD *)sub_181ECF0C0(a1: v76, a2: v77, a3: v74, a4: v75, a5: v78, a6: v79, a7);
    }
    v83 = MEMORY[0x1827C6220](a1: v17, a2: v18, a3: v86);
    v71 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v71 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v71 = sub_181EAA920(a1: v69, a2: v70, a3: 36449600);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v71 + 40;
      *(_DWORD *)v71 = 36449600;
      *(_DWORD *)(v71 + 4) = 0;
      *(_QWORD *)(v71 + 8) = 0;
      *(_QWORD *)(v71 + 16) = 0;
      *(_QWORD *)(v71 + 24) = 0;
      *(_QWORD *)(v71 + 32) = 0;
    }
    *(_DWORD *)(v71 + 20) = 46923644;
    *(_DWORD *)(v71 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v71 + 12) = (unsigned __int64)(v71 - v8) >> 3;
    v82 = (_DWORD *)v71;
    MEMORY[0x18503B9A0](a1: v69, a2: v70, a3: v71, a4: v71, a5: 0);
    v72 = (unsigned __int64)v82;
    v82[2] = (unsigned __int64)(v83 - v8) >> 3;
    if ( (*(_DWORD *)v72 & 2) != 0 )
    {
      v73 = (v72 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v72 & 0xFFFFFFFFFFF80000LL) + ((v72 - v73) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v72 & 0xFFFFFFFFFFF80000LL) + ((v72 - v73) >> 9) + 0x38) = 0;
      v60 = v72;
    }
    else
    {
      v60 = v72;
    }
    goto LABEL_31;
  }
  result = (_DWORD *)MEMORY[0x1859E49A0](a1: v11, a2: v12, a3: v8 + 8 * v13, a4: v10, a5: v86);
  if ( result == (_DWORD *)v8 )
  {
    v84 = result;
  }
  else
  {
    v15 = *result >> 3;
    if ( (_DWORD)v15 == 4262015 )
      goto LABEL_32;
    if ( (_DWORD)v15 == 5058792 )
    {
      v84 = result;
      if ( (unsigned int)sub_181ECAA80(a1: v17, a2: v18, a3: (__int64)result, a4: v16, a5: v19, a6: v20, a7: v80) != 0 )
        goto LABEL_74;
    }
    else
    {
      v84 = result;
    }
  }
  sub_181EC4E20(a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v20);
  v24 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * v85 + 128)))(
          a1: v22,
          a2: v23,
          a3: v87,
          a4: v21,
          a5: v86);
  if ( v24 == v8 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return (_DWORD *)v8;
  }
  else
  {
    v82 = (_DWORD *)v24;
    sub_181ECFCC0(a1: v26, a2: v27, a3: v87, a4: v25, a5: v24, a6: v86);
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v82;
  }
}
