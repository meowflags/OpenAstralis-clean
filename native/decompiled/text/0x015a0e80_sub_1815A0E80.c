// sub_1815A0E80
// rva 0x015a0e80  size 747  section .text  group text
// window base 0x1815a0e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A0E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // ecx
  int v19; // edi
  int v20; // esi
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rsi
  int v40; // ecx
  int v41; // edi
  int v42; // esi
  int v43; // r8d
  int v44; // r9d
  char v46; // [rsp+0h] [rbp-48h] BYREF
  __int64 v47; // [rsp+8h] [rbp-40h]
  __int64 v48; // [rsp+10h] [rbp-38h]
  __int64 v49; // [rsp+18h] [rbp-30h]
  unsigned int v50; // [rsp+24h] [rbp-24h]
  __int64 v51; // [rsp+28h] [rbp-20h]
  __int64 v52; // [rsp+30h] [rbp-18h]
  __int64 v53; // [rsp+38h] [rbp-10h]
  unsigned int v54; // [rsp+44h] [rbp-4h]

  v52 = a3;
  if ( (unsigned __int64)&v46 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_27;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_27:
    MEMORY[0x182771080]();
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
    return sub_1815A1180();
  }
  if ( *(_DWORD *)(v6 + 8 * v8 + 36) != 0 )
  {
    v51 = v6 + 8 * v8;
    v50 = v8;
    sub_1815A4C20(a1, a2, a3: v6 + 8 * v8, a4: v6 + 8 * v8, a5, a6, a7: v46);
    v9 = *(_DWORD *)(v6 + 8LL * v50 + 36);
  }
  else
  {
    v9 = 0;
  }
  v10 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v10 + 24) > *(_QWORD *)(v7 + 32) )
  {
    v54 = v9;
    v10 = MEMORY[0x181EAA920](a1, a2, a3: 34161576);
    v11 = v54;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v10 + 24;
    *(_DWORD *)v10 = 34161576;
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = 0;
    v11 = v9;
  }
  v51 = v10;
  MEMORY[0x185787780](a1, a2, a3: v10, a4, a5: v11);
  v14 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v14 + 40) > *(_QWORD *)(v7 + 32) )
  {
    v15 = MEMORY[0x181EAA920](a1: v12, a2: v13, a3: 35798656);
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v14 + 40;
    *(_DWORD *)v14 = 35798656;
    *(_DWORD *)(v14 + 4) = 0;
    *(_QWORD *)(v14 + 8) = 0;
    *(_QWORD *)(v14 + 16) = 0;
    *(_QWORD *)(v14 + 24) = 0;
    *(_QWORD *)(v14 + 32) = 0;
    v15 = v14;
  }
  v49 = v15;
  v48 = v6 + 8LL * *(unsigned int *)(v52 + 4);
  sub_1815A2220(a1: v12, a2: v13, a3: v15);
  if ( (unsigned int)sub_1815A2320(a1: v16, a2: v17, a3: v49) != 0 )
  {
    v23 = sub_1815A25E0(a1: v19, a2: v20, a3: v49, a4: v18, a5: v21, a6: v22, a7: v46);
    v26 = *(_QWORD *)(v7 + 40);
    v27 = 35798840;
    v53 = 35798840;
    if ( (unsigned __int64)(v26 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v48 = v23;
      v26 = MEMORY[0x181EAA920](a1: v24, a2: v25, a3: v53);
      v23 = v48;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v26 + 24;
      *(_DWORD *)v26 = 35798840;
      *(_DWORD *)(v26 + 4) = 0;
      *(_QWORD *)(v26 + 8) = 0;
      *(_QWORD *)(v26 + 16) = 0;
    }
    v48 = v23;
    v47 = v26;
    MEMORY[0x185771940](a1: v24, a2: v25, a3: v26, a4: v27, a5: v23);
    v28 = v51;
    ++*(_DWORD *)(v51 + 4);
    MEMORY[0x1857881C0](
      a1: *(unsigned int *)(v28 + 12),
      a2: v30,
      a3: v28,
      a4: v29,
      a5: v47,
      a6: v6 + 8LL * *(unsigned int *)(v28 + 8));
    while ( (unsigned int)sub_1815A2320(a1: v31, a2: v32, a3: v49) != 0 )
    {
      v33 = sub_1815A25E0(a1: v41, a2: v42, a3: v49, a4: v40, a5: v43, a6: v44, a7: v46);
      v36 = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(v36 + 24) > *(_QWORD *)(v7 + 32) )
      {
        v47 = v33;
        v36 = MEMORY[0x181EAA920](a1: v34, a2: v35, a3: v53);
        v33 = v47;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v36 + 24;
        *(_DWORD *)v36 = 35798840;
        *(_DWORD *)(v36 + 4) = 0;
        *(_QWORD *)(v36 + 8) = 0;
        *(_QWORD *)(v36 + 16) = 0;
      }
      v47 = v33;
      v48 = v36;
      MEMORY[0x185771940](a1: v34, a2: v35, a3: v36, a4: v36, a5: v33);
      v37 = v51;
      ++*(_DWORD *)(v51 + 4);
      MEMORY[0x1857881C0](
        a1: *(unsigned int *)(v37 + 12),
        a2: v39,
        a3: v37,
        a4: v38,
        a5: v48,
        a6: v6 + 8LL * *(unsigned int *)(v37 + 8));
    }
  }
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v51;
}
