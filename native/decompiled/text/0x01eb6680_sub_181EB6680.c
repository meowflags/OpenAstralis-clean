// sub_181EB6680
// rva 0x01eb6680  size 596  section .text  group text
// window base 0x181eb6680: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB6680(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  int *v8; // rbx
  unsigned __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  _QWORD v26[8]; // [rsp+20h] [rbp-1B8h] BYREF
  _BYTE v27[32]; // [rsp+60h] [rbp-178h] BYREF
  _BYTE v28[208]; // [rsp+80h] [rbp-158h] BYREF
  _BYTE v29[16]; // [rsp+150h] [rbp-88h] BYREF
  _BYTE v30[60]; // [rsp+160h] [rbp-78h] BYREF
  unsigned int v31; // [rsp+19Ch] [rbp-3Ch]
  __int64 v32; // [rsp+1A0h] [rbp-38h]
  __int64 *v33; // [rsp+1A8h] [rbp-30h]
  _BYTE *v34; // [rsp+1B0h] [rbp-28h]
  _QWORD *v35; // [rsp+1B8h] [rbp-20h]
  int *v36; // [rsp+1C0h] [rbp-18h]
  __int64 v37; // [rsp+1C8h] [rbp-10h]
  int *v38; // [rsp+1D0h] [rbp-8h]

  v38 = a3;
  if ( (unsigned int)MEMORY[0x11703C30](a1, a2, a3, a4: 292570152) != 0 )
    return 23;
  v7 = MEMORY[0x11703B68];
  if ( MEMORY[0x11703B68] == 0 )
  {
    v37 = 292567912;
    v36 = (int *)v30;
    MEMORY[0x11703A50](a1: v4, a2: v5, a3: 292567912, a4: v30);
    v8 = v36;
    v9 = (unsigned __int64 *)v37;
    *(_QWORD *)v37 = (unsigned int)v36[1];
    MEMORY[0x117033D0] = (unsigned int)v8[10];
    v7 = *v9;
  }
  if ( v7 == 0 )
  {
    MEMORY[0x18276E7E0](a1: v4, a2: v5, a3: v38);
    JUMPOUT(0x181EB68D4LL);
  }
  if ( 0x10000 % v7 != 0 )
    return 24;
  v37 = v7;
  if ( (v7 & 0xFFF) != 0 )
    return 24;
  sub_181EB7C00();
  if ( v38 != nullptr && *v38 >= 1 )
  {
    v36 = v38;
  }
  else
  {
    v26[1] = 0;
    LODWORD(v26[0]) = 1;
    v36 = (int *)v26;
  }
  v35 = v27;
  MEMORY[0x182839540](a1: v11, a2: v12, a3: v27, a4: v10, a5: 26, a6: 0);
  v34 = v28;
  v13 = v35;
  v35[1] = v28;
  MEMORY[0x181593700](a1: v14, a2: v15, a3: v3 + 376612472, a4: v13, a5: v36, a6: v13);
  v33 = (__int64 *)v29;
  result = MEMORY[0x181595040](a1: v17, a2: v18, a3: v29, a4: v16, a5: v35);
  if ( (_DWORD)result != 0 )
  {
    if ( *((_BYTE *)v35 + 25) != 0 )
    {
      v31 = result;
      MEMORY[0x1815926E0](a1: v19, a2: v20, a3: v35);
      return v31;
    }
  }
  else
  {
    v32 = *v33;
    sub_181EB6D20();
    result = sub_181EB68E0(a1: v22, a2: v23, a3: v32, a4: v21, a5: v35);
    if ( (_DWORD)result != 0 && *((_BYTE *)v35 + 25) != 0 )
    {
      v31 = result;
      MEMORY[0x1815926E0](a1: v24, a2: v25, a3: v35);
      return v31;
    }
  }
  return result;
}
