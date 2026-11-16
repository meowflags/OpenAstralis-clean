// sub_18501E2C0
// rva 0x0501e2c0  size 1020  section .text  group text
// window base 0x18501e2c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501E2C0(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 i; // rax
  __int64 v13; // rsi
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // r9d
  unsigned int v18; // esi
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r8
  unsigned int v24; // ebx
  __int64 v25; // rdx
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rbp
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // r8
  signed __int64 v34; // rsi
  signed __int64 v35; // r9
  int v36; // eax
  void *v37; // rdi
  __int64 v38; // rdx
  char v39; // [rsp+0h] [rbp-58h] BYREF
  __int64 v40; // [rsp+10h] [rbp-48h]
  __int64 v41; // [rsp+18h] [rbp-40h]
  __int64 v42; // [rsp+20h] [rbp-38h]
  unsigned int v43; // [rsp+28h] [rbp-30h]
  unsigned int v44; // [rsp+2Ch] [rbp-2Ch]
  unsigned __int64 v45; // [rsp+30h] [rbp-28h]
  unsigned int v46; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v47; // [rsp+40h] [rbp-18h]
  unsigned int v48; // [rsp+44h] [rbp-14h]
  __int64 v49; // [rsp+48h] [rbp-10h]
  unsigned int v50; // [rsp+50h] [rbp-8h]
  unsigned int v51; // [rsp+54h] [rbp-4h]

  v42 = a3;
  v51 = a6;
  if ( (unsigned __int64)&v39 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_51;
  if ( (int)a6 < 0 )
  {
LABEL_52:
    v50 = a5;
    MEMORY[0x182770E80](a1, a2, a3: v51);
LABEL_53:
    v50 = a5;
    MEMORY[0x182770B00](a1, a2, a3, a4: v10, a5, a6);
    goto LABEL_54;
  }
  v8 = *(_QWORD *)(v7 + 40);
  v9 = *(_QWORD *)(v7 + 32);
  v10 = 34082368;
  v49 = 34082368;
  v11 = ((unsigned int)a6 + 19LL) & 0x1FFFFFFF8LL;
  if ( v11 >= 0x20000 || (a2 = v8 + v11, v8 + v11 > v9) )
  {
    v50 = a5;
    v8 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: 34082368, a5: v51);
    v10 = v49;
    a6 = v51;
    a5 = v50;
    a3 = v42;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = a2;
    *(_QWORD *)v8 = 34082368;
    *(_DWORD *)(v8 + 8) = a6;
    *(_DWORD *)(v8 + 12) = 0;
    if ( v11 - 16 >= 0x800 )
    {
      v50 = a5;
      memset((void *)(v8 + 16), 0, v11 - 16);
      a1 = v8 + v11;
      v10 = v49;
    }
    else
    {
      for ( i = 16; v11 > i; i += 8LL )
        *(_QWORD *)(v8 + i) = 0;
    }
  }
  v41 = v8;
  if ( (int)a5 < 0 )
    goto LABEL_53;
  if ( a3 == v6 )
  {
LABEL_54:
    v50 = a5;
    MEMORY[0x182771080](a1, a2, a3, a4: v10, a5, a6);
    goto LABEL_55;
  }
  v48 = *(_DWORD *)(a3 + 8);
  v13 = (unsigned int)(a6 + a5);
  if ( (unsigned int)v13 > v48 >> 1 )
  {
LABEL_55:
    v50 = a5;
    MEMORY[0x182770B00]();
    goto LABEL_56;
  }
  v47 = a6 + a5;
  if ( a3 == v6 )
    JUMPOUT(0x30A0393B6LL);
  if ( v8 == v6 )
    JUMPOUT(0x30A0393C0LL);
  v50 = a5;
  v14 = MEMORY[0x182836340](a1: v8, a2: v13, a3: a3 + 2LL * (unsigned int)a5 + 12, a4: v10, a5: v8 + 12);
  if ( v14 == v51 )
  {
    v46 = v14;
    goto LABEL_28;
  }
  v46 = v14;
  v18 = v47;
  v47 = 2 * v50;
  v19 = sub_1850217A0(a1: v16, a2: v18, a3: v18, a4: v15, a5: 2 * v50, a6: v17, a7: v39);
  v23 = v47;
  if ( (v47 & 0x80000000) != 0 || (v24 = v19 - v47, (int)(v19 - v47) < 0) || v47 > v48 )
  {
    MEMORY[0x18579B920](a1: v21, a2: v22, a3: v42, a4: v20, a5: v47, a6: v19);
LABEL_51:
    v50 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_52;
  }
  v25 = *(_QWORD *)(v7 + 40);
  v26 = *(_QWORD *)(v7 + 32);
  v27 = v24;
  v28 = (v24 + 19LL) & 0x1FFFFFFF8LL;
  if ( v28 >= 0x20000 || (v29 = v25 + v28) > v26 )
  {
    v45 = v24;
    v44 = v19;
    v43 = v19 - v47;
    v25 = MEMORY[0x181EAA840](a1: v21, a2: v22, a3: v49, a4: v49, a5: v24, a6: v26);
    v27 = v45;
    v24 = v43;
    v23 = v47;
  }
  else
  {
    v30 = v49;
    *(_QWORD *)(v7 + 40) = v29;
    *(_QWORD *)v25 = v30;
    *(_DWORD *)(v25 + 8) = v24;
  }
  v31 = v48 - v23;
  if ( (int)v24 < (int)(v48 - v23) )
    JUMPOUT(0x30A03947DLL);
  if ( v27 < v31 )
    JUMPOUT(0x30A03948ALL);
  if ( v31 >= 1LL )
  {
    v32 = v42 + v23 + 12;
    v21 = 0;
    do
    {
      *(_BYTE *)(v25 + 12 + v21) = *(_BYTE *)(v32 + v21);
      ++v21;
    }
    while ( v21 <= v31 - 1LL );
  }
  v34 = v27 - v31;
  if ( v34 >= 2048 )
  {
    v37 = (void *)(v25 + v31 + 12);
    memset(v37, 0, v34);
    v21 = (__int64)v37 + v34;
  }
  else if ( (__int64)v27 > v31 )
  {
    --v34;
    v35 = 0;
    do
      *(_BYTE *)(v25 + v31 + 12 + v35++) = 0;
    while ( v35 <= v34 );
  }
  if ( *(_WORD *)(v25 + (int)(2 * v46) + 12) >= 0x100u )
  {
    v40 = v25;
LABEL_35:
    if ( *(int *)(v7 + 16) <= 0 )
    {
      MEMORY[0x18277F280](a1: v21, a2: v34, a3: v40);
      return v38;
    }
    return v40;
  }
  if ( v51 > v24 >> 1 )
  {
LABEL_56:
    MEMORY[0x182770B00](a1: v21, a2: v34, a3: v25, a4: v46, a5: v50);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18501E6C0();
  }
  if ( v41 == v6 )
    JUMPOUT(0x30A039571LL);
  v40 = v25;
  v36 = MEMORY[0x182836340](a1: v21, a2: v34, a3: v25 + 12, a4: v51, a5: v41 + 12);
  if ( v36 != v51 )
    goto LABEL_35;
LABEL_28:
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v41;
}
