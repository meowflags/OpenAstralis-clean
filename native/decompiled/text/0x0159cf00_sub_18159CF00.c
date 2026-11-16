// sub_18159CF00
// rva 0x0159cf00  size 1241  section .text  group text
// window base 0x18159cf00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159CF00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  int i; // ebx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // r8
  __int64 v32; // rcx
  unsigned int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // ebx
  unsigned int v37; // eax
  __int64 v38; // r9
  __int64 v39; // rcx
  unsigned int v40; // ebp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdi
  __int64 v49; // rcx
  unsigned int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rsi
  int v58; // eax
  __int64 v59; // rcx
  int v60; // edx
  int v61; // ecx
  int v62; // edi
  int v63; // esi
  int v64; // r8d
  int v65; // r9d
  __int64 v66; // [rsp+0h] [rbp-38h] BYREF
  __int64 v67; // [rsp+10h] [rbp-28h]
  __int64 v68; // [rsp+18h] [rbp-20h]
  int v69; // [rsp+20h] [rbp-18h]
  unsigned int v70; // [rsp+24h] [rbp-14h]
  unsigned int v71; // [rsp+28h] [rbp-10h]
  unsigned int v72; // [rsp+2Ch] [rbp-Ch]
  unsigned int v73; // [rsp+30h] [rbp-8h]
  unsigned int v74; // [rsp+34h] [rbp-4h]

  v68 = a3;
  if ( (unsigned __int64)&v66 <= *(_QWORD *)(v9 + 8) )
  {
    v74 = a1;
    v73 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v8 )
  {
    v10 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v10 == 0 )
    {
LABEL_69:
      v74 = a1;
      v73 = a5;
      MEMORY[0x182771080]();
      goto LABEL_70;
    }
    v67 = a6;
    if ( *(_DWORD *)(v8 + 8 * v10 + 8) >> *(_BYTE *)(a3 + 12) <= a5 )
    {
      i = a1;
      v71 = a5;
LABEL_6:
      if ( a6 != v8 )
      {
        v11 = *(unsigned int *)(a6 + 4);
        if ( (_DWORD)v11 != 0 )
        {
          v12 = *(_DWORD *)(v8 + 8 * v11 + 8);
          v13 = (unsigned int)*(char *)(a6 + 12);
          if ( (int)(v12 >> *(_BYTE *)(a6 + 12)) > i )
          {
            v74 = a1;
            v73 = a5;
            v72 = i;
            if ( (unsigned int)MEMORY[0x184FEBC20](a1, a2, a3: a6, a4: v13, a5: (unsigned int)i) == 42 )
            {
              for ( i = v72 + 1; ; i = v69 + 1 )
              {
                a6 = v67;
                v35 = *(unsigned int *)(v67 + 4);
                if ( (_DWORD)v35 == 0 )
                  break;
                v33 = *(_DWORD *)(v8 + 8 * v35 + 8);
                v34 = (unsigned int)*(char *)(v67 + 12);
                if ( (int)(v33 >> *(_BYTE *)(v67 + 12)) <= i )
                  goto LABEL_10;
                v69 = i;
                if ( (unsigned int)MEMORY[0x184FEBC20](a1: v20, a2: v21, a3: v67, a4: v34, a5: (unsigned int)i) != 42 )
                {
                  i = v69;
                  a6 = v67;
                  goto LABEL_10;
                }
              }
              goto LABEL_75;
            }
            i = v72;
            a6 = v67;
          }
          else
          {
            v74 = a1;
            v73 = a5;
          }
LABEL_10:
          v14 = *(unsigned int *)(a6 + 4);
          if ( (_DWORD)v14 != 0 )
          {
            if ( *(int *)(v9 + 16) <= 0 )
              v14 = MEMORY[0x18277F280]();
            return *(_DWORD *)(v8 + 8 * v14 + 8) >> *(_BYTE *)(a6 + 12) == i;
          }
          goto LABEL_72;
        }
LABEL_71:
        v74 = a1;
        v73 = a5;
        MEMORY[0x182771080]();
LABEL_72:
        MEMORY[0x182771080]();
        goto LABEL_73;
      }
LABEL_70:
      v72 = i;
      v74 = a1;
      v73 = a5;
      MEMORY[0x182771080]();
      goto LABEL_71;
    }
    if ( a6 == v8 )
    {
LABEL_73:
      v74 = a1;
      v73 = a5;
      MEMORY[0x182771080]();
      goto LABEL_74;
    }
    v16 = *(unsigned int *)(a6 + 4);
    if ( (_DWORD)v16 == 0 )
    {
LABEL_74:
      v74 = a1;
      v73 = a5;
      MEMORY[0x182771080]();
LABEL_75:
      MEMORY[0x182771080]();
      goto LABEL_76;
    }
    v17 = *(_DWORD *)(v8 + 8 * v16 + 8);
    v18 = (unsigned int)*(char *)(a6 + 12);
    if ( (int)(v17 >> *(_BYTE *)(a6 + 12)) > (int)a1 )
    {
      v74 = a1;
      v73 = a5;
      if ( (unsigned int)MEMORY[0x184FEBC20](a1, a2, a3: v67, a4: v18, a5: (unsigned int)a1) == 42 )
      {
        v36 = v74;
        v37 = v73;
LABEL_36:
        v38 = v67;
        v72 = v36;
        v39 = *(unsigned int *)(v67 + 4);
        v40 = v36 + 1;
        if ( (_DWORD)v39 != 0 )
        {
          if ( *(_DWORD *)(v8 + 8 * v39 + 8) >> *(_BYTE *)(v67 + 12) <= (signed int)v40 )
          {
            if ( *(int *)(v9 + 16) <= 0 )
              MEMORY[0x18277F280]();
            return 1;
          }
          v70 = v36 + 1;
          while ( 1 )
          {
            v46 = *(unsigned int *)(v68 + 4);
            if ( (_DWORD)v46 == 0 )
              break;
            if ( *(_DWORD *)(v8 + 8 * v46 + 8) >> *(_BYTE *)(v68 + 12) <= (signed int)v37 )
            {
              v69 = v37;
              if ( *(int *)(v9 + 16) <= 0 )
                MEMORY[0x18277F280]();
              return 0;
            }
            v69 = v37;
            if ( (unsigned int)sub_18159CF00(a1: v40, a2: v38, a3: v68, a4: v68, a5: v37) != 0 )
            {
              if ( *(int *)(v9 + 16) <= 0 )
                MEMORY[0x18277F280](a1: v43, a2: v44, a3: v41, a4: v42, a5: v45, a6: v67);
              return 1;
            }
            v37 = v69 + 1;
            v40 = v70;
            v38 = v67;
          }
          goto LABEL_77;
        }
LABEL_76:
        MEMORY[0x182771080]();
LABEL_77:
        MEMORY[0x182771080]();
LABEL_78:
        v72 = v48;
        v71 = v47;
        MEMORY[0x182771080](a1: v48, a2, a3, a4: v59, a5: v47, a6);
LABEL_79:
        MEMORY[0x182771080](a1: v48, a2, a3, a4: v73, a5: v47, a6);
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        return sub_18159D3E0(a1: v62, a2: v63, a3: v60, a4: v61, a5: v64, a6: v65, a7);
      }
      v72 = MEMORY[0x184FEBC20](a1: v23, a2: v24, a3: v68, a4: v22, a5: v73);
      v28 = MEMORY[0x184FEBC20](a1: v26, a2: v27, a3: v67, a4: v25, a5: v74);
      if ( v72 == v28 )
      {
        v47 = v73 + 1;
        v48 = v74 + 1;
        while ( 1 )
        {
          a6 = v67;
          a3 = v68;
          v59 = *(unsigned int *)(v68 + 4);
          if ( (_DWORD)v59 == 0 )
            goto LABEL_78;
          if ( *(_DWORD *)(v8 + 8 * v59 + 8) >> *(_BYTE *)(v68 + 12) <= (int)v47 )
          {
            i = v48;
            v71 = v47;
            a1 = v74;
            a5 = v73;
            goto LABEL_6;
          }
          v49 = *(unsigned int *)(v67 + 4);
          if ( (_DWORD)v49 == 0 )
            goto LABEL_79;
          v50 = *(_DWORD *)(v8 + 8 * v49 + 8);
          v51 = (unsigned int)*(char *)(v67 + 12);
          if ( (int)(v50 >> *(_BYTE *)(v67 + 12)) <= (int)v48 )
          {
            v19 = (unsigned int)v48;
            a1 = v74;
            a5 = v73;
            goto LABEL_18;
          }
          v71 = v47;
          v72 = v48;
          if ( (unsigned int)MEMORY[0x184FEBC20](a1: v48, a2, a3: v67, a4: v51, a5: (unsigned int)v48) == 42 )
          {
            v36 = v72;
            v37 = v71;
            goto LABEL_36;
          }
          v70 = MEMORY[0x184FEBC20](a1: v53, a2: v54, a3: v68, a4: v52, a5: v71);
          v58 = MEMORY[0x184FEBC20](a1: v56, a2: v57, a3: v67, a4: v55, a5: v72);
          if ( v70 != v58 )
          {
            v32 = v72;
            goto LABEL_26;
          }
          v48 = v72 + 1;
          v47 = v71 + 1;
        }
      }
      v32 = v74;
LABEL_26:
      if ( *(int *)(v9 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v30, a2, a3: v29, a4: v32, a5: v31, a6: v67);
      return 0;
    }
    else
    {
      v19 = (unsigned int)a1;
LABEL_18:
      if ( *(int *)(v9 + 16) <= 0 )
      {
        v74 = a1;
        v73 = a5;
        MEMORY[0x18277F280](a1, a2, a3, a4: v19);
      }
      return 0;
    }
  }
  v74 = a1;
  v73 = a5;
  MEMORY[0x182771080]();
  goto LABEL_69;
}
