// sub_181EC6060
// rva 0x01ec6060  size 1427  section .text  group text
// window base 0x181ec6060: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC6060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  int *v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 i; // rax
  __int64 result; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rcx
  _DWORD *v32; // rdx
  unsigned __int64 v33; // r9
  __int64 v34; // rdi
  unsigned __int64 j; // r8
  __int64 v36; // rbx
  __int64 v37; // r8
  __int64 v38; // rdx
  unsigned int v39; // r10d
  __int64 v40; // r8
  __int64 v41; // rcx
  unsigned __int64 v42; // r10
  int v43; // edx
  int v44; // ecx
  int v45; // edi
  int v46; // esi
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // [rsp+0h] [rbp-78h] BYREF
  __int64 v50; // [rsp+8h] [rbp-70h]
  __int64 v51; // [rsp+10h] [rbp-68h]
  _DWORD *v52; // [rsp+18h] [rbp-60h]
  __int64 v53; // [rsp+20h] [rbp-58h]
  __int64 v54; // [rsp+28h] [rbp-50h]
  __int64 v55; // [rsp+30h] [rbp-48h]
  __int64 v56; // [rsp+38h] [rbp-40h]
  __int64 v57; // [rsp+40h] [rbp-38h]
  __int64 v58; // [rsp+48h] [rbp-30h]
  __int64 v59; // [rsp+50h] [rbp-28h]
  __int64 v60; // [rsp+58h] [rbp-20h]
  unsigned int v61; // [rsp+60h] [rbp-18h]
  unsigned int v62; // [rsp+64h] [rbp-14h]
  __int64 v63; // [rsp+68h] [rbp-10h]
  unsigned int v64; // [rsp+70h] [rbp-8h]
  int v65; // [rsp+74h] [rbp-4h]

  v58 = a1;
  v10 = v8 + 376659448;
  if ( (unsigned __int64)&v49 <= *(_QWORD *)(v9 + 8) )
  {
    v65 = a6;
    v57 = a5;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v49);
  }
  else if ( a1 != v8 )
  {
    v11 = *(unsigned int *)(a1 + 8);
    if ( (_DWORD)v11 != 0 )
      goto LABEL_4;
    if ( a5 != v8 )
    {
      if ( (_DWORD)a6 == *(_DWORD *)(a5 + 48) )
      {
        if ( *(int *)(v9 + 16) <= 0 )
        {
          v65 = a6;
          v57 = a5;
          MEMORY[0x18277F280]();
          a5 = v57;
        }
        return *(unsigned int *)(a5 + 56);
      }
LABEL_4:
      if ( a5 != v8 )
      {
        v64 = *(_DWORD *)(a1 + 8);
        v12 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v12 + 24) > *(_QWORD *)(v9 + 32) )
        {
          v56 = v8 + 376659448;
          v65 = a6;
          v57 = a5;
          v12 = sub_181EAA920(a1, a2, a3: 40467864);
          v11 = v64;
          v10 = v56;
          a1 = v58;
          LODWORD(a6) = v65;
          a5 = v57;
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v12 + 24;
          *(_DWORD *)v12 = 40467864;
          *(_DWORD *)(v12 + 4) = 0;
          *(_QWORD *)(v12 + 8) = 0;
          *(_QWORD *)(v12 + 16) = 0;
        }
        *(_DWORD *)(v12 + 8) = *(_DWORD *)(a5 + 48);
        v13 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v13 + 24) > *(_QWORD *)(v9 + 32) )
        {
          v55 = v12;
          v56 = v10;
          v65 = a6;
          v57 = a5;
          v13 = sub_181EAA920(a1, a2, a3: 40468160);
          v12 = v55;
          v11 = v64;
          v10 = v56;
          LODWORD(a6) = v65;
          a5 = v57;
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v13 + 24;
          *(_DWORD *)v13 = 40468160;
          *(_DWORD *)(v13 + 4) = 0;
          *(_QWORD *)(v13 + 8) = 0;
          *(_QWORD *)(v13 + 16) = 0;
        }
        v54 = v13;
        *(_DWORD *)(v12 + 4) = (unsigned __int64)(v13 - v8) >> 3;
        if ( (*(_DWORD *)v12 & 2) != 0 )
        {
          v42 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v42) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v42) >> 9) + 0x38) = 0;
        }
        v56 = v10;
        v65 = a6;
        v14 = (int *)(v8 + 4LL * *(int *)(a5 + 56));
        sub_181EBC500(
          a1: v8,
          a2: v12,
          a3: 0,
          a4: v11,
          a5: v14,
          a6: v12,
          a7: v49,
          a8: v50,
          a9: v51,
          a10: (__int64)v52,
          a11: v53,
          a12: v54,
          a13: v12,
          a14: v10,
          a15: a5,
          a16: v58,
          a17: v59,
          a18: v60,
          a19: v61,
          a20: (__int64)v14);
        v17 = v64;
        if ( v64 != 0 )
        {
          v61 = *(_DWORD *)(v58 + 12);
          sub_181EBF720(a1: v58, a2: v16, a3: v54, a4: v64, a5: v61, a6: 1);
          for ( i = 1; ; i = (unsigned int)(HIDWORD(v60) + 1) )
          {
            v17 = v64;
            v15 = v58;
            if ( (int)v64 <= (int)i )
              break;
            if ( v64 <= (unsigned int)i )
              goto LABEL_57;
            v61 = *(_DWORD *)(v58 + 4 * i + 12);
            HIDWORD(v60) = i;
            sub_181EBF720(a1: v58, a2: v16, a3: v54, a4: v64, a5: v61, a6: 1);
          }
          v62 = i;
        }
        else
        {
          v62 = 0;
        }
        if ( v65 >= 1 )
          sub_181EBF720(a1: v15, a2: v16, a3: v54, a4: v17, a5: (unsigned int)v65, a6: 1);
        v53 = MEMORY[0x185EFDF00](a1: v15, a2: v16, a3: 1, a4: v17, a5: 0);
        v23 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v23 + 24) > *(_QWORD *)(v9 + 32) )
        {
          v23 = sub_181EAA920(a1: v20, a2: v21, a3: 40468408);
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v23 + 24;
          *(_DWORD *)v23 = 40468408;
          *(_DWORD *)(v23 + 4) = 0;
          *(_QWORD *)(v23 + 8) = 0;
          *(_QWORD *)(v23 + 16) = 0;
        }
        v52 = (_DWORD *)v23;
        sub_181EBEF00(a1: v20, a2: v21, a3: v23, a4: v23, a5: v54, a6: v22);
        v28 = sub_181EBC6A0(a1: v25, a2: v26, a3: v53, a4: v24, a5: (__int64)v52, a6: v27);
        v31 = v53;
        v7 = *(_DWORD *)(v53 + 12);
        if ( (v7 & 0x80000000) == 0 )
        {
          v32 = *(_DWORD **)(v9 + 40);
          v33 = (v7 + 19LL) & 0x1FFFFFFF8LL;
          v34 = 34082368;
          if ( v33 >= 0x20000 || (v30 = (__int64)v32 + v33, (unsigned __int64)v32 + v33 > *(_QWORD *)(v9 + 32)) )
          {
            v59 = v28;
            v32 = (_DWORD *)sub_181EAA840(a1: 34082368, a2: v30, a3: 34082368, a4: v53, a5: v7);
            v28 = v59;
            v31 = v53;
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v30;
            *(_QWORD *)v32 = 34082368;
            v32[2] = v7;
            v32[3] = 0;
            if ( v33 - 16 >= 0x800 )
            {
              v59 = v28;
              memset(v32 + 4, 0, v33 - 16);
              v34 = (__int64)v32 + v33;
              v28 = v59;
              v31 = v53;
            }
            else
            {
              for ( j = 16; v33 > j; j += 8LL )
                *(_QWORD *)&v32[j / 4] = 0;
            }
          }
          v52 = v32;
          v36 = *(unsigned int *)(v31 + 4);
          if ( (_DWORD)v36 == 0 )
          {
            v59 = v28;
LABEL_39:
            result = sub_181EC6600(a1: v34, a2: v30, a3: v56, a4: v31, a5: (_DWORD)v52, a6: v33, a7: v49);
            if ( *(int *)(v9 + 16) <= 0 )
              return MEMORY[0x18277F280]();
            return result;
          }
          v37 = *(unsigned int *)(v8 + 8 * v36 + 4);
          if ( (_DWORD)v37 != 0 )
          {
            v51 = v8 + 8 * v36;
            v59 = v28;
            v62 = *(_DWORD *)(v51 + 12);
            HIDWORD(v50) = v36;
            sub_181EB4960(a1: 0, a2: v62, a3: (_DWORD *)(v8 + 8 * v37), a4: v31, a5: 0, a6: v32, a7: v49);
            v38 = v8 + 8LL * *(unsigned int *)(v8 + 8LL * HIDWORD(v50) + 8);
            v39 = v62;
            while ( v38 != v8 )
            {
              v40 = *(unsigned int *)(v38 + 4);
              if ( (_DWORD)v40 == 0 )
                goto LABEL_58;
              v41 = *(unsigned int *)(v38 + 12);
              v51 = v38;
              v62 = v39;
              v64 = v41;
              sub_181EB4960(
                a1: v39,
                a2: (unsigned int)v41,
                a3: (_DWORD *)(v8 + 8 * v40),
                a4: v41,
                a5: 0,
                a6: v52,
                a7: v49);
              v38 = v8 + 8LL * *(unsigned int *)(v51 + 8);
              v39 = v64 + v62;
            }
            goto LABEL_39;
          }
          goto LABEL_56;
        }
        goto LABEL_54;
      }
LABEL_53:
      v65 = a6;
      v28 = MEMORY[0x182771080]();
LABEL_54:
      v59 = v28;
      MEMORY[0x182770E80](a1: v29, a2: v30, a3: v7);
    }
    v65 = a6;
    v28 = MEMORY[0x182771080]();
LABEL_56:
    v59 = v28;
    LODWORD(i) = MEMORY[0x182771080](a1: v34);
LABEL_57:
    MEMORY[0x182771220](a1: v15, a2: v16, a3: (unsigned int)i, a4: v17, a5: (unsigned int)v17);
LABEL_58:
    MEMORY[0x182771080](a1: v58, a2: v63, a3: v38, a4: v53, a5: v55, a6: v57);
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
    return sub_181EC6600(a1: v45, a2: v46, a3: v43, a4: v44, a5: v47, a6: v48, a7);
  }
  v65 = a6;
  v57 = a5;
  MEMORY[0x182771080]();
  goto LABEL_53;
}
