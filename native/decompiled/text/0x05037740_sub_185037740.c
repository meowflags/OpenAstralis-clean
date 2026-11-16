// sub_185037740
// rva 0x05037740  size 594  section .text  group text
// window base 0x185037740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185037740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  unsigned int v6; // ebp
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  unsigned int v13; // r8d
  __int64 v14; // r8
  unsigned int (__fastcall *v15)(__int64, __int64, __int64, __int64, __int64); // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // ebx
  __int64 i; // rcx
  unsigned int v24; // r8d
  __int64 v25; // rsi
  __int64 v26; // r8
  unsigned int (__fastcall *v27)(__int64, __int64, __int64, __int64, __int64); // r9
  __int64 v28; // rcx
  __int64 v29; // rsi
  unsigned int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned int v34; // ebp
  __int64 v35; // rbx
  unsigned int v36; // esi
  unsigned int v37; // edx
  unsigned int v38; // ecx
  __int64 v39; // [rsp+0h] [rbp-38h] BYREF
  __int64 v40; // [rsp+8h] [rbp-30h]
  __int64 v41; // [rsp+10h] [rbp-28h]
  __int64 v42; // [rsp+18h] [rbp-20h]
  unsigned int v43; // [rsp+24h] [rbp-14h]
  unsigned int v44; // [rsp+28h] [rbp-10h]
  unsigned int v45; // [rsp+2Ch] [rbp-Ch]
  unsigned int v46; // [rsp+30h] [rbp-8h]
  unsigned int v47; // [rsp+34h] [rbp-4h]

  v42 = a3;
  if ( (unsigned __int64)&v39 <= *(_QWORD *)(v9 + 8) )
  {
    v47 = a6;
    MEMORY[0x181EB84E0]();
    goto LABEL_27;
  }
  v10 = *(unsigned int *)(a3 + 4);
  v11 = v8 + 8 * v10;
  v41 = v11;
  if ( (_DWORD)v10 == 0 )
  {
LABEL_27:
    v47 = a6;
    MEMORY[0x182771080]();
LABEL_28:
    MEMORY[0x182771220](a1, a2, a3: v6, a4: v11, a5: v46);
    goto LABEL_29;
  }
  v12 = *(_DWORD *)(v8 + 8 * v10 + 8);
  v46 = v12;
  v13 = a5 + 1;
  if ( (int)v12 <= (int)v13 )
    JUMPOUT(0x30A052780LL);
  v6 = v13;
  if ( v12 <= v13 )
    goto LABEL_28;
  v14 = *(unsigned int *)(v11 + 4LL * v13 + 12);
  if ( (_DWORD)v14 != 0 )
  {
    v45 = v6;
    v47 = a6;
    v15 = (unsigned int (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v7
                                                                                   + *(_QWORD *)(v8
                                                                                               + 8LL
                                                                                               * (*(_DWORD *)(v8 + 8 * v14) >> 3)
                                                                                               + 176));
    v40 = v8 + 8 * v14;
    if ( v15(a1, a2: v40, a3: v40, a4: v11, a5: v8) != 0 )
    {
      v18 = sub_185037B00(a1, a2: v17, a3: v42, a4: v16, a5: v45);
      a6 = v46;
      v6 = v18;
      v19 = 1;
    }
    else
    {
      v19 = 0;
      a6 = v47;
      v6 = v45;
    }
  }
  else
  {
    v19 = 0;
    v40 = v8 + 8 * v14;
  }
  v20 = a6 >> 1;
  if ( (a6 & 0xFFFFFFFE) == 0 )
    goto LABEL_20;
  v21 = v6;
  v45 = a6 >> 1;
  v44 = v19;
  v22 = v46;
  for ( i = v41; ; i = v41 )
  {
    while ( 1 )
    {
      v24 = v21 + 1;
      if ( (int)v22 <= (int)v24 )
        JUMPOUT(0x30A05281FLL);
      v25 = v24;
      if ( v22 > v24 )
        break;
LABEL_29:
      MEMORY[0x182771220](a1, a2: v25, a3: (unsigned int)v25, a4: v44, a5: v46);
LABEL_30:
      v34 = v46;
      v35 = v41;
      MEMORY[0x18277F280](a1: v42, a2: v25, a3, a4: v31, a5: v40);
      v21 = v36;
      v45 = v37;
      v44 = v38;
      i = v35;
      v22 = v34;
    }
    v26 = *(unsigned int *)(i + 4LL * v24 + 12);
    a1 = v8 + 8 * v26;
    if ( (_DWORD)v26 != 0 )
    {
      v43 = v25;
      v27 = (unsigned int (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v7
                                                                                     + *(_QWORD *)(v8
                                                                                                 + 8LL
                                                                                                 * (*(_DWORD *)(v8 + 8 * v26) >> 3)
                                                                                                 + 176));
      v40 = v8 + 8 * v26;
      if ( v27(a1, a2: v25, a3: v40, a4: i, a5: v8) != 0 )
      {
        v30 = sub_185037B00(a1, a2: v29, a3: v42, a4: v28, a5: v43);
        v31 = 1;
        v25 = v30;
        v32 = v46;
      }
      else
      {
        v31 = v44;
        v32 = v45;
        v25 = v43;
      }
    }
    else
    {
      v32 = v45;
      v40 = v8 + 8 * v26;
      v31 = v44;
    }
    a3 = v32 >> 1;
    if ( (v32 & 0xFFFFFFFE) == 0 )
      break;
    if ( *(int *)(v9 + 16) <= 0 )
      goto LABEL_30;
    v21 = v25;
    v45 = v32 >> 1;
    v44 = v31;
    v22 = v46;
  }
  v19 = v31;
  v20 = (unsigned int)a3;
LABEL_20:
  if ( *(int *)(v9 + 16) <= 0 )
    v19 = MEMORY[0x18277F280](a1, a2: v40, a3, a4: v20);
  return MEMORY[0xE9691E4] & (unsigned int)v19;
}
