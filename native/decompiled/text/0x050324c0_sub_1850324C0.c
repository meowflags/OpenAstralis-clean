// sub_1850324C0
// rva 0x050324c0  size 599  section .text  group text
// window base 0x1850324c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850324C0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  _DWORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r8
  int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v41; // [rsp+0h] [rbp-38h] BYREF
  __int64 v42; // [rsp+8h] [rbp-30h]
  __int64 v43; // [rsp+10h] [rbp-28h]
  __int64 v44; // [rsp+18h] [rbp-20h]
  _DWORD *v45; // [rsp+20h] [rbp-18h]
  int v46; // [rsp+2Ch] [rbp-Ch]
  __int64 v47; // [rsp+30h] [rbp-8h]

  v45 = a3;
  if ( (unsigned __int64)&v41 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_23;
  }
  v6 = *(_QWORD *)(v5 + 40);
  if ( (unsigned __int64)(v6 + 24) > *(_QWORD *)(v5 + 32) )
  {
    v6 = MEMORY[0x181EAA920](a1, a2, a3: 34085680);
  }
  else
  {
    *(_QWORD *)(v5 + 40) = v6 + 24;
    *(_DWORD *)v6 = 34085680;
    *(_DWORD *)(v6 + 4) = 0;
    *(_QWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = 0;
  }
  v44 = v6;
  MEMORY[0x184F35AC0](a1, a2, a3: v6, a4, a5: v4 + 366695752);
  v47 = *((_QWORD *)v45 + 10);
  MEMORY[0x184F371C0](a1: v7, a2: v8, a3: v44, a4: v47, a5: v47);
  v43 = v4 + 372643920;
  MEMORY[0x184F36F80](a1: v10, a2: v11, a3: v44, a4: v9, a5: v4 + 372643920);
  v42 = v4 + 8LL * (unsigned int)v45[1];
  MEMORY[0x184F36F80](a1: v12, a2: v13, a3: v44);
  MEMORY[0x184F36F80](a1: v15, a2: v16, a3: v44, a4: v14, a5: v43);
  v20 = v45;
  v21 = *v45 >> 3;
  if ( *(__int16 *)(v4 + 8 * v21 + 62) >= 3
    && *(_DWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 8 * v21 + 16) + 20) == 70129 )
  {
    v23 = 5;
    goto LABEL_7;
  }
  v22 = (unsigned int)v45[3];
  if ( (_DWORD)v22 == 0 )
  {
LABEL_23:
    MEMORY[0x182771080](a1: v18, a2: v19, a3: v20, a4: v17, a5: v44);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_185032720();
  }
  v23 = *(_DWORD *)(v4 + 8 * v22 + 24);
LABEL_7:
  v46 = v23;
  MEMORY[0x184F36640](a1: v18, a2: v19, a3: v44);
  MEMORY[0x184F36F80](a1: v25, a2: v26, a3: v44, a4: v24, a5: v43);
  v29 = sub_18502F540(a1: v27, a2: v28, a3: v45);
  if ( v29 == v4 )
  {
    v43 = v29;
  }
  else
  {
    v33 = v4 + 8LL * *(unsigned int *)(v29 + 8);
    v43 = v29;
    v42 = v33;
    MEMORY[0x184F36F80](a1: v31, a2: v32, a3: v44, a4: v33, a5: v33);
  }
  v34 = MEMORY[0x184F36F80](a1: v31, a2: v32, a3: v44, a4: v30, a5: v4 + 365347544);
  v37 = v44;
  if ( *(_DWORD *)(v44 + 8) != 0 )
  {
    v38 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v38 + 24) > *(_QWORD *)(v5 + 32) )
    {
      v42 = v34;
      v38 = MEMORY[0x181EAA920](a1: v35, a2: v36, a3: 34082680);
      v37 = v44;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v38 + 24;
      *(_DWORD *)v38 = 34082680;
      *(_DWORD *)(v38 + 4) = 0;
      *(_QWORD *)(v38 + 8) = 0;
      *(_QWORD *)(v38 + 16) = 0;
    }
    v42 = v38;
    MEMORY[0x184FE9280](a1: v35, a2: v36, a3: v38, a4: v37, a5: v37, a6: v4);
    v39 = v42;
  }
  else
  {
    v39 = v4 + 373281248;
  }
  if ( *(int *)(v5 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v35, a2: v36, a3: v39);
  return v39;
}
