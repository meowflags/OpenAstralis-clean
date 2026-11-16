// sub_184F32C80
// rva 0x04f32c80  size 1862  section .text  group text
// window base 0x184f32c80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F32C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // ebp
  int v21; // eax
  unsigned __int64 v22; // rdi
  __int64 v23; // rsi
  _BOOL8 v24; // rcx
  int v25; // eax
  __int64 v26; // rbx
  unsigned __int64 v27; // r9
  unsigned __int64 j; // rdx
  __int64 result; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // r8
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rbp
  int v40; // eax
  int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rbx
  unsigned __int64 v44; // r9
  unsigned __int64 i; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  unsigned int v48; // ebp
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // r8
  __int64 v55; // [rsp+0h] [rbp-58h] BYREF
  __int64 v56; // [rsp+8h] [rbp-50h]
  __int64 v57; // [rsp+10h] [rbp-48h]
  __int64 v58; // [rsp+18h] [rbp-40h]
  __int64 v59; // [rsp+20h] [rbp-38h]
  __int64 v60; // [rsp+28h] [rbp-30h]
  int v61; // [rsp+34h] [rbp-24h]
  unsigned int v62; // [rsp+38h] [rbp-20h]
  unsigned int v63; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v64; // [rsp+40h] [rbp-18h]
  unsigned int v65; // [rsp+44h] [rbp-14h]
  unsigned int v66; // [rsp+48h] [rbp-10h]
  BOOL v67; // [rsp+4Ch] [rbp-Ch]
  unsigned int v68; // [rsp+50h] [rbp-8h]
  int v69; // [rsp+54h] [rbp-4h]

  v60 = a3;
  if ( (unsigned __int64)&v55 <= *(_QWORD *)(v7 + 8) )
  {
    v59 = a6;
    v58 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v6 )
  {
    v8 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v8 == 0 )
    {
LABEL_85:
      v59 = a6;
      v58 = a5;
      v9 = MEMORY[0x182771080]();
LABEL_86:
      v69 = v9;
      v58 = a5;
      v9 = MEMORY[0x182771080]();
      goto LABEL_87;
    }
    v9 = *(_DWORD *)(v6 + 8 * v8 + 8) >> *(_BYTE *)(a5 + 12);
    if ( v9 == 0 )
    {
      if ( *(int *)(v7 + 16) <= 0 )
      {
        v59 = a6;
        v58 = a5;
        MEMORY[0x18277F280]();
        return v59;
      }
      return a6;
    }
    if ( a6 == v6 )
      goto LABEL_86;
    v10 = *(unsigned int *)(a6 + 4);
    if ( (_DWORD)v10 == 0 )
    {
LABEL_87:
      v69 = v9;
      v59 = a6;
      v58 = a5;
      MEMORY[0x182771080]();
      goto LABEL_88;
    }
    v11 = *(_DWORD *)(v6 + 8 * v10 + 8);
    v12 = (unsigned int)*(char *)(a6 + 12);
    v13 = v11 >> *(_BYTE *)(a6 + 12);
    if ( v13 == 0 )
    {
      if ( *(int *)(v7 + 16) <= 0 )
      {
        v59 = a6;
        v58 = a5;
        MEMORY[0x18277F280]();
        return v58;
      }
      return a5;
    }
    if ( v9 == 2 )
    {
      v68 = v13;
      v69 = 2;
      v59 = a6;
      v58 = a5;
      v37 = MEMORY[0x184FEBC20](a1, a2, a3: a5, a4: v12, a5: 0);
      if ( v37 - 97 >= 0x1A )
      {
        if ( v37 < 0x41 )
        {
          v67 = false;
          a3 = v60;
          goto LABEL_10;
        }
        if ( v37 >= 0x5B )
        {
          v67 = false;
          a3 = v60;
          goto LABEL_10;
        }
      }
      v67 = MEMORY[0x184FEBC20](a1, a2, a3: v58, a4: v38, a5: 1) == 58;
      a3 = v60;
    }
    else
    {
      v67 = false;
      v68 = v13;
      v69 = v9;
      v59 = a6;
      v58 = a5;
    }
LABEL_10:
    v14 = (unsigned int)*(__int16 *)(a3 + 4);
    v66 = v14;
    v65 = (unsigned __int16)v14;
    if ( v68 < 2 )
    {
      v64 = 0;
      v63 = v69 - 1;
      goto LABEL_13;
    }
    v63 = v69 - 1;
    v15 = MEMORY[0x184FEBC20](a1, a2, a3: v59, a4: v14, a5: 0);
    if ( v65 != v15 )
    {
      v64 = 0;
LABEL_13:
      v16 = MEMORY[0x184FEBC20](a1, a2, a3: v58, a4: v14, a5: v63);
      if ( v65 == v16 )
        v20 = v63;
      else
        v20 = v69;
      v63 = v20;
      v62 = v20 + v68 - v64;
      v21 = MEMORY[0x184FEBC20](a1: v18, a2: v19, a3: v59, a4: v17, a5: v64);
      if ( v65 == v21 )
      {
        v25 = v62;
        v24 = v67;
      }
      else
      {
        v24 = v67;
        if ( !v67 )
        {
          v42 = v62 + 1;
          v65 = v42;
          if ( (int)v42 >= 0 )
          {
            v43 = *(_QWORD *)(v7 + 40);
            v44 = (2LL * (unsigned int)v42 + 19) & 0x3FFFFFFF8LL;
            if ( v44 >= 0x20000 || (v22 = v43 + v44, v43 + v44 > *(_QWORD *)(v7 + 32)) )
            {
              v61 = v21;
              v43 = MEMORY[0x181EAA840](a1: v22, a2: v23, a3: 34089376, a4: v42, a5: (unsigned int)v42);
            }
            else
            {
              *(_QWORD *)(v7 + 40) = v22;
              *(_QWORD *)v43 = 34089376;
              *(_DWORD *)(v43 + 8) = v42;
              *(_DWORD *)(v43 + 12) = 0;
              if ( v44 - 16 >= 0x800 )
              {
                memset((void *)(v43 + 16), 0, v44 - 16);
                v42 = v65;
              }
              else
              {
                for ( i = 16; v44 > i; i += 8LL )
                  *(_QWORD *)(v43 + i) = 0;
              }
            }
            v57 = v43;
            MEMORY[0x184FF3680](a1: v43, a2: 0, a3: v58, a4: v42, a5: 0, a6: v63);
            v46 = v65;
            if ( v65 > v63 )
            {
              v47 = v57;
              v48 = v63;
              v49 = v66;
              *(_WORD *)(v57 + 2LL * v63 + 12) = v66;
              MEMORY[0x184FF3680](a1: v47, a2: v48 + 1, a3: v59, a4: v49, a5: v64, a6: v68);
LABEL_33:
              v34 = v57;
              v35 = *(_DWORD *)(v57 + 8);
              if ( v35 < 2
                || (v31 = v66, v39 = v35 - 1, (_WORD)v66 != *(_WORD *)(v57 + 2 * v39 + 12))
                || *(_WORD *)(v57 + 2LL * (v35 - 2) + 12) == 58 )
              {
                v36 = *(_QWORD *)(v7 + 40);
                if ( (unsigned __int64)(v36 + 24) > *(_QWORD *)(v7 + 32) )
                {
                  v66 = *(_DWORD *)(v57 + 8);
                  v36 = MEMORY[0x181EAA920](a1: v32, a2: v33, a3: 34082680);
                  v35 = v66;
                }
                else
                {
                  *(_QWORD *)(v7 + 40) = v36 + 24;
                  *(_DWORD *)v36 = 34082680;
                  *(_DWORD *)(v36 + 4) = 0;
                  *(_QWORD *)(v36 + 8) = 0;
                  *(_QWORD *)(v36 + 16) = 0;
                }
                v56 = v36;
                MEMORY[0x184FE8D60](a1: v35, a2: v6, a3: v36, a4: v31, a5: v57, a6: 0);
                if ( *(int *)(v7 + 16) <= 0 )
                  MEMORY[0x18277F280]();
                return v56;
              }
              else
              {
                v54 = *(_QWORD *)(v7 + 40);
                if ( (unsigned __int64)(v54 + 24) > *(_QWORD *)(v7 + 32) )
                {
                  v66 = v35 - 1;
                  v54 = MEMORY[0x181EAA920](a1: v32, a2: v33, a3: 34082680);
                  LODWORD(v39) = v66;
                  v34 = v57;
                }
                else
                {
                  *(_QWORD *)(v7 + 40) = v54 + 24;
                  *(_DWORD *)v54 = 34082680;
                  *(_DWORD *)(v54 + 4) = 0;
                  *(_QWORD *)(v54 + 8) = 0;
                  *(_QWORD *)(v54 + 16) = 0;
                }
                v56 = v54;
                v57 = v34;
                MEMORY[0x184FE8CC0](a1: (unsigned int)v39, a2: v33, a3: v54, a4: v31, a5: v34, a6: 0);
                if ( *(int *)(v7 + 16) <= 0 )
                  MEMORY[0x18277F280]();
                return v56;
              }
            }
LABEL_90:
            MEMORY[0x182771220](a1: v60, a2: v64, a3: v63, a4: v46, a5: (unsigned int)v46, a6: v59);
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
            return sub_184F333E0();
          }
LABEL_89:
          MEMORY[0x182770E80](a1: v22, a2: v23, a3: v65);
          goto LABEL_90;
        }
        v25 = v62;
      }
      if ( v25 >= 0 )
      {
        v26 = *(_QWORD *)(v7 + 40);
        v27 = (2LL * (unsigned int)v25 + 19) & 0x3FFFFFFF8LL;
        if ( v27 >= 0x20000 || (v22 = v26 + v27, v26 + v27 > *(_QWORD *)(v7 + 32)) )
        {
          v26 = MEMORY[0x181EAA840](a1: v22, a2: v23, a3: 34089376, a4: v24, a5: v62);
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v22;
          *(_QWORD *)v26 = 34089376;
          *(_DWORD *)(v26 + 8) = v25;
          *(_DWORD *)(v26 + 12) = 0;
          if ( v27 - 16 >= 0x800 )
          {
            memset((void *)(v26 + 16), 0, v27 - 16);
            v24 = v67;
          }
          else
          {
            for ( j = 16; v27 > j; j += 8LL )
              *(_QWORD *)(v26 + j) = 0;
          }
        }
        v57 = v26;
        MEMORY[0x184FF3680](a1: v26, a2: 0, a3: v58, a4: v24, a5: 0, a6: v63);
        MEMORY[0x184FF3680](a1: v57, a2: v63, a3: v59, a4: v30, a5: v64, a6: v68);
        goto LABEL_33;
      }
LABEL_88:
      MEMORY[0x182770E80](a1: v22, a2: v23, a3: v62);
      goto LABEL_89;
    }
    v40 = MEMORY[0x184FEBC20](a1, a2, a3: v59, a4: v14, a5: 1);
    if ( v65 == v40 )
      v41 = 2;
    else
      v41 = !v67;
    if ( v41 != v68 )
    {
      v64 = v41;
      goto LABEL_13;
    }
    v50 = MEMORY[0x184FEBC20](a1, a2, a3: v58, a4: v14, a5: v63);
    if ( v65 == v50 )
    {
      result = MEMORY[0x184FFD140](a1: v52, a2: v53, a3: v58, a4: v51, a5: 0, a6: v63);
      if ( *(int *)(v7 + 16) <= 0 )
        return MEMORY[0x18277F280]();
    }
    else
    {
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v58;
    }
    return result;
  }
  v59 = a6;
  MEMORY[0x182771080]();
  goto LABEL_85;
}
