// sub_18504DAE0
// rva 0x0504dae0  size 742  section .text  group text
// window base 0x18504dae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504DAE0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  _DWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 result; // rax
  unsigned __int64 v19; // rbp
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+8h] [rbp-20h]
  __int64 v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  _DWORD *v24; // [rsp+20h] [rbp-8h]

  v24 = a3;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    v23 = a6;
    v22 = a5;
    MEMORY[0x181EB84E0]();
LABEL_20:
    MEMORY[0x182770780]();
    goto LABEL_21;
  }
  v8 = *(_QWORD *)(v7 + 40);
  v9 = v8 + 4112;
  if ( (unsigned __int64)(v8 + 4112) > *(_QWORD *)(v7 + 32) )
  {
    v23 = a6;
    v22 = a5;
    v8 = MEMORY[0x181EAA840](a1, a2, a3: 37779360, a4: v9, a5: 1024);
    a6 = v23;
    a5 = v22;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v9;
    *(_QWORD *)v8 = 37779360;
    *(_DWORD *)(v8 + 8) = 1024;
    *(_DWORD *)(v8 + 12) = 0;
    memset((void *)(v8 + 16), 0, 0x1000u);
    v10 = v8 + 4112;
  }
  v11 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v11 + 56) > *(_QWORD *)(v7 + 32) )
  {
    v21 = v8;
    v23 = a6;
    v22 = a5;
    v11 = MEMORY[0x181EAA920](a1: v10, a2, a3: 37779472);
    v8 = v21;
    a6 = v23;
    a5 = v22;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v11 + 56;
    *(_DWORD *)v11 = 37779472;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = 0;
    *(_QWORD *)(v11 + 24) = 0;
    *(_QWORD *)(v11 + 32) = 0;
    *(_QWORD *)(v11 + 40) = 0;
    *(_QWORD *)(v11 + 48) = 0;
  }
  *(_BYTE *)(v11 + 40) = 1;
  *(_DWORD *)(v11 + 32) = 1;
  *(_DWORD *)(v11 + 8) = (unsigned __int64)(v8 - v6) >> 3;
  v12 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v12 + 48) > *(_QWORD *)(v7 + 32) )
  {
    v21 = v11;
    v23 = a6;
    v22 = a5;
    v12 = MEMORY[0x181EAA840](a1: v10, a2, a3: 37779952, a4: v12, a5: 8);
    v11 = v21;
    a6 = v23;
    a5 = v22;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v12 + 48;
    *(_QWORD *)v12 = 37779952;
    *(_DWORD *)(v12 + 8) = 8;
    *(_DWORD *)(v12 + 12) = 0;
    *(_QWORD *)(v12 + 16) = 0;
    *(_QWORD *)(v12 + 24) = 0;
    *(_QWORD *)(v12 + 32) = 0;
    *(_QWORD *)(v12 + 40) = 0;
  }
  *(_DWORD *)(v11 + 12) = (unsigned __int64)(v12 - v6) >> 3;
  if ( (*(_DWORD *)v11 & 2) != 0 )
  {
    v19 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v19) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v19) >> 9) + 0x38) = 0;
  }
  v23 = a6;
  v22 = a5;
  v21 = v11;
  v13 = MEMORY[0x185FABF60](a1: v10, a2, a3: v11);
  v15 = v24;
  v16 = *v24 >> 3;
  v17 = *(_DWORD *)(v6 + 8 * v16 + 44) & (0x57Eu >> HIBYTE(*(_DWORD *)(v6 + 8 * v16 + 44)));
  if ( (unsigned __int16)*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v16 + 20) + 4 * v17 + 12) != 1406 )
    goto LABEL_20;
  if ( *v24 >> 3 != 5413845 )
  {
LABEL_21:
    MEMORY[0x18276FC00](a1: v17, a2: v14, a3: v15, a4: v22, a5: v6 + 43311008, a6: v23);
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
    return sub_18504DDE0();
  }
  result = MEMORY[0x185F4AA60](a1: v23, a2: v14, a3: v24, a4: v24, a5: v13, a6: v21);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
