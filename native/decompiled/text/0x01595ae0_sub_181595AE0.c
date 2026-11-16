// sub_181595AE0
// rva 0x01595ae0  size 1416  section .text  group text
// window base 0x181595ae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181595AE0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5, unsigned __int64 a6)
{
  unsigned int v6; // ebp
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  int v15; // r10d
  __int64 v16; // r11
  int v17; // edx
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rax
  _DWORD *v21; // r8
  __int64 result; // rax
  __int64 v23; // rcx
  unsigned int v24; // r8d
  _DWORD *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rbp
  int v30; // r8d
  _DWORD *v31; // rdi
  BOOL v32; // r8d
  int v33; // r8d
  char *v34; // r8
  unsigned __int64 v35; // rbx
  int v36; // ebp
  int j; // r9d
  char *v38; // r8
  unsigned __int64 v39; // rcx
  int v40; // eax
  int i; // r9d
  __int64 v42; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v43; // [rsp+8h] [rbp-30h]
  _DWORD *v44; // [rsp+10h] [rbp-28h]
  unsigned int v45; // [rsp+1Ch] [rbp-1Ch]
  unsigned int v46; // [rsp+20h] [rbp-18h]
  unsigned int v47; // [rsp+24h] [rbp-14h]
  unsigned int v48; // [rsp+28h] [rbp-10h]
  unsigned int v49; // [rsp+2Ch] [rbp-Ch]
  unsigned int v50; // [rsp+30h] [rbp-8h]
  unsigned int v51; // [rsp+34h] [rbp-4h]

  v9 = (__int64)a3;
  v44 = a3;
  v10 = a5;
  v51 = a5;
  v43 = (_DWORD *)a6;
  v50 = a1;
  v49 = a2;
  if ( (unsigned __int64)&v42 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_71:
    MEMORY[0x182771080]();
LABEL_72:
    MEMORY[0x182771220](a1, a2, a3: v51, a4, a5: v6);
LABEL_73:
    MEMORY[0x182771080]();
LABEL_74:
    MEMORY[0x182771220](a1, a2: v13, a3: v50);
LABEL_75:
    LODWORD(v27) = v6;
    MEMORY[0x182771220](a1, a2: v26, a3: (unsigned int)v26, a4: v23, a5: v6);
LABEL_76:
    MEMORY[0x182771220](a1, a2: v24, a3: (unsigned int)v27, a4: v23);
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
    return sub_181596080();
  }
  if ( a3 != v7 )
  {
    v11 = *a3 >> 3;
    if ( SHIWORD(v7[2 * v11 + 15]) >= 2 )
      goto LABEL_8;
LABEL_4:
    v9 = MEMORY[0x18276FC00](a1, a2, a3: v9, a4, a5: v7 + 8521236);
  }
LABEL_5:
  if ( (_DWORD *)a6 != v7 )
  {
    v12 = *(_DWORD *)a6 >> 3;
    if ( SHIWORD(v7[2 * v12 + 15]) < 2 )
      goto LABEL_7;
    goto LABEL_19;
  }
  while ( 1 )
  {
    if ( (int)a2 < 1 )
    {
      result = 0;
      goto LABEL_22;
    }
    if ( (_DWORD *)v9 == v7 )
      goto LABEL_71;
    v6 = *(_DWORD *)(v9 + 8);
    if ( v6 <= v10 )
      goto LABEL_72;
    if ( (_DWORD *)a6 == v7 )
      goto LABEL_73;
    v13 = *(_DWORD *)(a6 + 8);
    if ( v13 <= (unsigned int)a1 )
      goto LABEL_74;
    v48 = *(_DWORD *)(v9 + 8);
    v47 = v13;
    v14 = (unsigned int)v7[2 * (*(_DWORD *)a6 >> 3) + 6];
    v15 = v7[2 * v14 + 9];
    LODWORD(v16) = SLOWORD(v7[2 * v14 + 15]);
    v46 = v16;
    v17 = v7[2 * v14 + 10];
    v18 = *(unsigned int *)(v9 + 4LL * v10 + 12);
    v19 = (__int16)v16;
    if ( (_DWORD)v18 == 0 )
    {
      v16 = (__int16)v16;
      goto LABEL_27;
    }
    v20 = v7[2 * v18] >> 3;
    v6 = SHIWORD(v7[2 * v20 + 15]);
    v21 = &v7[2 * v7[2 * v20 + 4]];
    if ( (v16 & 0x8000u) != 0LL )
      break;
    if ( (__int16)v6 > (__int16)v16 )
    {
      v16 = (__int16)v16;
      v19 = v15 == v21[(__int16)v16 + 3];
LABEL_26:
      if ( (_DWORD)v19 != 0 )
        goto LABEL_27;
    }
LABEL_18:
    v9 = MEMORY[0x18276F520](a1, a2, a3: &v7[2 * v18], a4: v19, a5: v21);
LABEL_19:
    if ( v7[2 * v7[2 * v12 + 4] + 4] != 64537 )
    {
LABEL_7:
      v9 = MEMORY[0x18276FC00](a1, a2, a3: a6, a4, a5: v7 + 8521236);
LABEL_8:
      if ( v7[2 * v7[2 * v11 + 4] + 4] != 64537 )
        goto LABEL_4;
      goto LABEL_5;
    }
  }
  if ( v17 < 0x10000 )
  {
    v21 = &v7[2 * v7[2 * v20 + 5]];
    v16 = (__int16)v16;
    v6 = v7[2 * v20 + 11] & ((unsigned int)v17 >> HIBYTE(v7[2 * v20 + 11]));
    v19 = v17 == (unsigned __int16)*(_DWORD *)((char *)v21 + (int)(4 * v6 + 12));
    goto LABEL_26;
  }
  v16 = (__int16)v16;
  v19 = v46;
  v40 = 2 * SLOWORD(v7[2 * v20 + 16]);
  v6 = (__int16)v6;
  for ( i = 0; ; i += 2 )
  {
    if ( v40 <= i )
    {
      a2 = v49;
      a1 = v50;
      v10 = v51;
      goto LABEL_18;
    }
    if ( v17 == v21[(__int16)v6 + 3 + i] )
      break;
  }
  LODWORD(a2) = v49;
  a1 = v50;
  a6 = (unsigned __int64)v43;
  v10 = v51;
LABEL_27:
  *(_DWORD *)(a6 + 4LL * (unsigned int)a1 + 12) = v18;
  if ( (*(_DWORD *)a6 & 2) != 0 )
  {
    if ( (*(_DWORD *)a6 & 1) != 0 )
    {
      v38 = (char *)(a6 - *(_QWORD *)(a6 - 8));
      v39 = (4 * (unsigned __int64)(unsigned int)a1 + 12) >> 9;
      if ( v38[v39 + 48] != 0 )
        v38[v39 + 48] = 0;
    }
    else if ( *(_BYTE *)((a6 & 0xFFFFFFFFFFF80000LL) + ((a6 - ((a6 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
    {
      *(_BYTE *)((a6 & 0xFFFFFFFFFFF80000LL) + ((a6 - ((a6 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
    }
  }
  result = 1;
  v23 = v46;
  v24 = v47;
  v6 = v48;
  v25 = v44;
  while ( (int)a2 > (int)result )
  {
    v26 = v10 + (unsigned int)result;
    if ( v6 <= (unsigned int)v26 )
      goto LABEL_75;
    v27 = (unsigned int)(result + a1);
    if ( v24 <= (unsigned int)v27 )
      goto LABEL_76;
    v28 = (unsigned int)v25[v26 + 3];
    if ( (_DWORD)v28 != 0 )
    {
      v29 = v7[2 * v28] >> 3;
      LOWORD(v30) = HIWORD(v7[2 * v29 + 15]);
      v31 = &v7[2 * v7[2 * v29 + 4]];
      if ( (v23 & 0x8000u) != 0LL )
      {
        if ( v17 >= 0x10000 )
        {
          v45 = v27;
          v36 = 2 * SLOWORD(v7[2 * v29 + 16]);
          v30 = (__int16)v30;
          for ( j = 0; v36 > j; j += 2 )
          {
            if ( v17 == v31[v30 + 3 + j] )
            {
              v27 = v45;
              a6 = (unsigned __int64)v43;
              goto LABEL_37;
            }
          }
LABEL_67:
          MEMORY[0x18276F520](a1: v31, a2: &v7[2 * v28], a3: &v7[2 * v28]);
          return MEMORY[0x18277F280]();
        }
        v33 = v7[2 * v29 + 11];
        v31 = (_DWORD *)(v33 & ((unsigned int)v17 >> SHIBYTE(v33)));
        v32 = v17 == (unsigned __int16)*(_DWORD *)((char *)&v7[2 * v7[2 * v29 + 5]]
                                                 + (int)(4 * (v33 & ((unsigned int)v17 >> SHIBYTE(v33))) + 12));
      }
      else
      {
        if ( (__int16)v30 <= (__int16)v23 )
          goto LABEL_67;
        v32 = v15 == v31[v16 + 3];
      }
      if ( !v32 )
        goto LABEL_67;
    }
LABEL_37:
    *(_DWORD *)(a6 + 4 * v27 + 12) = v28;
    result = (unsigned int)(result + 1);
    if ( (*(_DWORD *)a6 & 2) != 0 )
    {
      if ( (*(_DWORD *)a6 & 1) != 0 )
      {
        v34 = (char *)(a6 - *(_QWORD *)(a6 - 8));
        v35 = (unsigned __int64)(4 * v27 + 12) >> 9;
        if ( v34[v35 + 48] != 0 )
          v34[v35 + 48] = 0;
      }
      else if ( *(_BYTE *)((a6 & 0xFFFFFFFFFFF80000LL) + ((a6 - ((a6 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
      {
        *(_BYTE *)((a6 & 0xFFFFFFFFFFF80000LL) + ((a6 - ((a6 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
      }
    }
    v23 = v46;
    v24 = v47;
    v6 = v48;
    LODWORD(a2) = v49;
    a1 = v50;
    v10 = v51;
  }
LABEL_22:
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
