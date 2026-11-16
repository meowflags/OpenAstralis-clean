// sub_181ED7E00
// rva 0x01ed7e00  size 762  section .text  group text
// window base 0x181ed7e00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED7E00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // rdi
  _BOOL8 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int64 result; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // r8
  unsigned __int64 v20; // rsi
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // eax
  char v27; // [rsp+0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+8h] [rbp-30h]
  unsigned __int64 v29; // [rsp+10h] [rbp-28h]
  __int64 v30; // [rsp+18h] [rbp-20h]
  __int64 v31; // [rsp+20h] [rbp-18h]
  unsigned int v32; // [rsp+28h] [rbp-10h]
  BOOL v33; // [rsp+2Ch] [rbp-Ch]
  __int64 v34; // [rsp+30h] [rbp-8h]

  v31 = a5;
  v34 = a6;
  v30 = a1;
  v29 = a2;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v27);
    goto LABEL_40;
  }
  v28 = v6 + 373390488;
  v8 = sub_181ED7D80(a1, a2, a3: v6 + 373390488, a4: a5, a5);
  v10 = v34 != 0;
  v33 = v34 != 0;
  if ( v8 != 0 )
  {
    v11 = v29;
    if ( v29 != v6 )
    {
      if ( *(_BYTE *)(v29 + 12) != 0 )
      {
        if ( *(_BYTE *)(v29 + 12) != 1 )
        {
LABEL_44:
          MEMORY[0x1828C1C40](a1: v9, a2: v11, a3: v6 + 366376552);
          goto LABEL_45;
        }
      }
      else
      {
        v21 = v31;
        if ( v34 == 0 )
        {
LABEL_43:
          MEMORY[0x1828C1C40](a1: v9, a2: v11, a3: v6 + 371521720, a4: v10, a5: v21);
          goto LABEL_44;
        }
        v22 = MEMORY[0x18288A220](a1: v9, a2: v29, a3: v31, a4: v10, a5: v34, a6: 0);
        sub_181ED7B80(a1: v24, a2: v25, a3: v29, a4: v23, a5: v31, a6: v22);
      }
      goto LABEL_6;
    }
LABEL_40:
    MEMORY[0x182771080]();
LABEL_41:
    MEMORY[0x182771080]();
    goto LABEL_42;
  }
  v11 = v29;
  v19 = v31;
  if ( *(_DWORD *)(v31 + 52) != 0 && *(_DWORD *)(v31 + 4) == 0 )
  {
    MEMORY[0x1815AF580](a1: v9, a2: v29, a3: v31);
    v19 = v31;
  }
  if ( (*(_DWORD *)(v19 + 24) & 0x2000) != 0 )
  {
    v20 = v29;
    if ( v29 == v6 )
    {
LABEL_42:
      MEMORY[0x182771080]();
      goto LABEL_43;
    }
    if ( *(_BYTE *)(v29 + 12) != 0 )
    {
      sub_181ED7B20(a1: v9, a2: v29, a3: v29, a4: v10, a5: v19);
      v20 = v29;
    }
    else
    {
      if ( v34 != 0 )
      {
        v26 = MEMORY[0x18288A220](a1: v9, a2: v29, a3: v31, a4: v10, a5: v34, a6: 0);
        v20 = v29;
      }
      else
      {
        v26 = -5;
      }
      if ( *(_BYTE *)(v20 + 12) != 0 )
        goto LABEL_47;
      *(_DWORD *)(v20 + 8) = v26;
      *(_BYTE *)(v20 + 12) = 2;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v9, a2: v20);
    return v6;
  }
LABEL_6:
  if ( (unsigned int)MEMORY[0x182887A40](a1: v9, a2: v11, a3: v28, a4: v10, a5: v31) != 0 )
  {
    v14 = v29;
    if ( v29 != v6 )
    {
      if ( *(_BYTE *)(v29 + 12) == 0 )
      {
        v15 = 0xFFFFFFFB;
        goto LABEL_11;
      }
      if ( *(_BYTE *)(v29 + 12) == 2 )
      {
        v15 = *(_DWORD *)(v29 + 8);
LABEL_11:
        v16 = v30;
        v32 = v15;
        if ( v30 != v6 )
        {
          result = MEMORY[0x182887600](a1: v15, a2: v29, a3: v28, a4: v12, a5: v31, a6: v30);
          goto LABEL_13;
        }
        if ( v34 != 0 )
        {
          result = MEMORY[0x1828876E0](a1: v32, a2: v29, a3: v28, a4: v12, a5: v31);
LABEL_13:
          v18 = v29;
          *(_BYTE *)(v29 + 12) = 0;
          *(_DWORD *)(v18 + 4) = 0;
          *(_DWORD *)(v18 + 8) = -5;
          if ( *(int *)(v7 + 16) <= 0 )
            return MEMORY[0x18277F280]();
          return result;
        }
        goto LABEL_46;
      }
LABEL_45:
      MEMORY[0x1828C1C40](a1: v13, a2: v14, a3: v6 + 369855400);
LABEL_46:
      v26 = MEMORY[0x1828C1C40](a1: v16, a2: v14, a3: v6 + 371517280);
LABEL_47:
      v32 = v26;
      MEMORY[0x1828C1C40](a1: v9, a2: v20, a3: v6 + 368486984);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_181ED8100();
    }
    goto LABEL_41;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v13, a2: v29);
  return v31;
}
