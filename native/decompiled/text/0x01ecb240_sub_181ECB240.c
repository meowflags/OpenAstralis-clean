// sub_181ECB240
// rva 0x01ecb240  size 1446  section .text  group text
// window base 0x181ecb240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ECB240(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 (*v10)(void); // rax
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 i; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  _DWORD *v24; // rbx
  unsigned int v25; // edx
  unsigned int v26; // ebp
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdx
  unsigned __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rsi
  char v43; // cl
  int v44; // ebx
  _DWORD *v45; // rbp
  unsigned __int64 v46; // rcx
  int v47; // edx
  __int64 v48; // r8
  unsigned __int64 v49; // r8
  __int64 v50; // r8
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  int v56; // edx
  int v57; // ecx
  int v58; // edi
  int v59; // esi
  int v60; // r8d
  int v61; // r9d
  char v62; // [rsp+0h] [rbp-68h] BYREF
  _DWORD *v63; // [rsp+8h] [rbp-60h]
  unsigned int v64; // [rsp+14h] [rbp-54h]
  __int64 v65; // [rsp+18h] [rbp-50h]
  _DWORD *v66; // [rsp+20h] [rbp-48h]
  __int64 v67; // [rsp+28h] [rbp-40h]
  _DWORD *v68; // [rsp+30h] [rbp-38h]
  __int64 v69; // [rsp+38h] [rbp-30h]
  int v70; // [rsp+44h] [rbp-24h]
  unsigned int v71; // [rsp+48h] [rbp-20h]
  int v72; // [rsp+4Ch] [rbp-1Ch]
  int v73; // [rsp+50h] [rbp-18h]
  unsigned int v74; // [rsp+54h] [rbp-14h]
  __int64 v75; // [rsp+58h] [rbp-10h]
  __int64 v76; // [rsp+60h] [rbp-8h]

  v69 = a5;
  if ( (unsigned __int64)&v62 <= *(_QWORD *)(v9 + 8) )
  {
    v68 = a3;
    sub_181EB84E0(a1, a2, (__int64)a3, a4, a5, a6, a7: v62);
LABEL_10:
    MEMORY[0x182771080]();
LABEL_11:
    v20 = *(unsigned int *)(v69 + 4);
    i = v8 + 353301280;
    if ( (_DWORD)v20 == 0 )
      goto LABEL_29;
    v67 = v8 + 353301280;
    v66 = (_DWORD *)(v8 + 8 * v20);
    for ( i = MEMORY[0x1827C6220](); ; v67 = i )
    {
      if ( i == v8 )
        v22 = v67;
      else
        v22 = i;
      v23 = *(unsigned int *)(v22 + 4);
      v24 = (_DWORD *)(v8 + 58179152);
      if ( (_DWORD)v23 == 0 )
      {
        MEMORY[0x182771080](a1: v18, a2: v19, a3: v68, a4: v22, a5: v69);
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
        return sub_181ECB800(a1: v58, a2: v59, a3: v56, a4: v57, a5: v60, a6: v61, a7);
      }
      v25 = *(_DWORD *)(v8 + 8 * v23 + 8);
      if ( v25 != 0 )
      {
        v26 = *(char *)(v22 + 12);
        v27 = *(unsigned int *)(v8 + 374343896);
        v65 = v22;
        v28 = (v25 >> v26) + 41;
        v29 = 34082880;
        if ( (int)v28 < 0 )
        {
          v71 = v26;
          v67 = i;
          v48 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v48 + 40) > *(_QWORD *)(v9 + 32) )
          {
            v70 = (v25 >> v26) + 41;
            v64 = v27;
            v48 = sub_181EAA920(a1: v28, a2: v27, a3: 34082880);
            v27 = v64;
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v48 + 40;
            *(_DWORD *)v48 = 34082880;
            *(_DWORD *)(v48 + 4) = 0;
            *(_QWORD *)(v48 + 8) = 0;
            *(_QWORD *)(v48 + 16) = 0;
            *(_QWORD *)(v48 + 24) = 0;
            *(_QWORD *)(v48 + 32) = 0;
            v70 = (v25 >> v26) + 41;
          }
          *(_DWORD *)(v48 + 20) = 46923644;
          *(_DWORD *)(v48 + 16) = v27;
          *(_DWORD *)(v48 + 12) = (unsigned __int64)(v48 - v8) >> 3;
          v63 = (_DWORD *)v48;
          MEMORY[0x18503B9A0](a1: v28, a2: v27, a3: v48, a4: v29, a5: 0);
          v49 = (unsigned __int64)v63;
          v63[2] = 46004603;
          if ( (*(_DWORD *)v49 & 2) != 0 )
          {
            v54 = (v49 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v54) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v54) >> 9) + 0x38) = 0;
            v46 = v49;
          }
          else
          {
            v46 = v49;
          }
          goto LABEL_28;
        }
        v30 = v26;
        v31 = (unsigned int)((_DWORD)v28 << v26);
        if ( (int)v31 < 0 )
        {
          v70 = v31;
          v71 = v26;
          v67 = i;
          v50 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v50 + 40) > *(_QWORD *)(v9 + 32) )
          {
            v64 = v27;
            v50 = sub_181EAA920(a1: v31, a2: v27, a3: 34082880);
            v27 = v64;
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
          }
          *(_DWORD *)(v50 + 20) = 46923644;
          *(_DWORD *)(v50 + 16) = v27;
          *(_DWORD *)(v50 + 12) = (unsigned __int64)(v50 - v8) >> 3;
          v63 = (_DWORD *)v50;
          MEMORY[0x18503B9A0](a1: v31, a2: v27, a3: v50, a4: v30, a5: 0);
          v51 = (unsigned __int64)v63;
          v63[2] = 46004603;
          if ( (*(_DWORD *)v51 & 2) != 0 )
          {
            v55 = (v51 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v51 & 0xFFFFFFFFFFF80000LL) + ((v51 - v55) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v51 & 0xFFFFFFFFFFF80000LL) + ((v51 - v55) >> 9) + 0x38) = 0;
            v46 = v51;
          }
          else
          {
            v46 = v51;
          }
          goto LABEL_28;
        }
        v32 = *(_QWORD *)(v9 + 40);
        v33 = ((unsigned int)v31 + 19LL) & 0x1FFFFFFF8LL;
        v34 = 34082368;
        if ( v33 >= 0x20000 || (v52 = v32 + v33) > *(_QWORD *)(v9 + 32) )
        {
          v70 = v31;
          v71 = v26;
          v63 = (_DWORD *)(v8 + 58179152);
          v67 = i;
          v32 = sub_181EAA840(a1: v31, a2: v27, a3: 34082368, a4: 34082368, a5: v31);
          v26 = v71;
          v24 = v63;
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v52;
          *(_QWORD *)v32 = 34082368;
          *(_DWORD *)(v32 + 8) = v31;
          v70 = v31;
          v67 = i;
        }
        v71 = v26;
        v63 = (_DWORD *)v32;
        MEMORY[0x184FF2C40](a1: v26, a2: v63, a3: v24, a4: v34, a5: v63, a6: 0);
        MEMORY[0x184FF2C40](a1: v71, a2: v36, a3: v65, a4: v35, a5: v63, a6: 41);
        v75 = v7;
        v74 = v71;
        v73 = 0;
        v76 = v7;
        v66 = v63;
        v72 = 0;
      }
      else
      {
        v67 = i;
        v47 = *(unsigned __int8 *)(v8 + 58179165);
        v74 = 0;
        v73 = -47623041;
        v66 = (_DWORD *)(v8 + 376659768);
        v72 = v47;
      }
      v37 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v37 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v37 = sub_181EAA920(a1: v18, a2: v19, a3: 34117240);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v37 + 40;
        *(_DWORD *)v37 = 34117240;
        *(_DWORD *)(v37 + 4) = 0;
        *(_QWORD *)(v37 + 8) = 0;
        *(_QWORD *)(v37 + 16) = 0;
        *(_QWORD *)(v37 + 24) = 0;
        *(_QWORD *)(v37 + 32) = 0;
      }
      v67 = v37;
      *(_DWORD *)(v37 + 20) = 46923644;
      *(_DWORD *)(v37 + 16) = *(_DWORD *)(v8 + 374343896);
      *(_DWORD *)(v37 + 12) = (unsigned __int64)(v37 - v8) >> 3;
      v38 = MEMORY[0x18503B9A0](a1: v18, a2: v19, a3: v37, a4: v37, a5: 0);
      v41 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v41 + 24) > *(_QWORD *)(v9 + 32) )
      {
        v63 = (_DWORD *)v38;
        v41 = sub_181EAA920(a1: v39, a2: v40, a3: 34082680);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v41 + 24;
        *(_DWORD *)v41 = 34082680;
        *(_DWORD *)(v41 + 4) = 0;
        *(_QWORD *)(v41 + 8) = 0;
        *(_QWORD *)(v41 + 16) = 0;
      }
      v42 = v67;
      v43 = v74;
      v44 = v73;
      v45 = v66;
      *(_BYTE *)(v41 + 13) = v72;
      *(_BYTE *)(v41 + 12) = v43;
      *(_DWORD *)(v41 + 8) = v44;
      *(_DWORD *)(v41 + 4) = ((unsigned __int64)v45 - v8) >> 3;
      *(_DWORD *)(v42 + 8) = (unsigned __int64)(v41 - v8) >> 3;
      if ( (*(_DWORD *)v42 & 2) != 0 )
      {
        v53 = (v42 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v53) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v53) >> 9) + 0x38) = 0;
        v46 = v42;
      }
      else
      {
        v46 = v42;
      }
LABEL_28:
      i = MEMORY[0x182769900](a1: v39, a2: v42, a3: v46, a4: v46, a5: &a7);
LABEL_29:
      ;
    }
  }
  v10 = (__int64 (*)(void))(v7 + *(_QWORD *)(v8 + 8LL * (*a3 >> 3) + 144));
  v68 = a3;
  result = v10();
  if ( (_DWORD)result == 0 )
  {
    v14 = *(unsigned int *)(v69 + 4);
    if ( (_DWORD)v14 == 0 )
      goto LABEL_10;
    v67 = MEMORY[0x1827C6220](a1: v12, a2: v13, a3: v8 + 8 * v14);
    result = MEMORY[0x184FFC820](a1: v16, a2: v17, a3: v67, a4: v15, a5: v8 + 359917216, a6: 0);
    if ( (_DWORD)result != 0 )
      goto LABEL_11;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
