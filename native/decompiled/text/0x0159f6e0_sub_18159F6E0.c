// sub_18159F6E0
// rva 0x0159f6e0  size 340  section .text  group text
// window base 0x18159f6e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159F6E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned int i; // eax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 result; // rax
  char v35; // [rsp+0h] [rbp-28h] BYREF
  __int64 v36; // [rsp+8h] [rbp-20h]
  __int64 v37; // [rsp+10h] [rbp-18h]
  int v38; // [rsp+1Ch] [rbp-Ch]
  unsigned int v39; // [rsp+20h] [rbp-8h]
  int v40; // [rsp+24h] [rbp-4h]

  v37 = a3;
  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v4 )
  {
    v6 = MEMORY[0x184FF40A0](a1, a2, a3, a4, a5: 44, a6: 0);
    if ( v6 < 0 )
    {
      v40 = v6;
      v25 = 0;
    }
    else
    {
      v39 = v6;
      v36 = MEMORY[0x184FFD140](a1: v8, a2: v9, a3: v37, a4: v7, a5: 0, a6: (unsigned int)v6);
      sub_18159E420(a1: v11, a2: v12, a3: v36, a4: v10, a5: v13, a6: v14, a7: v35);
      for ( i = v39 + 1; ; i = v38 + 1 )
      {
        v39 = i;
        v23 = MEMORY[0x184FF40A0](a1: v15, a2: v16, a3: v37, a4: i, a5: 44, a6: i);
        if ( v23 < 0 )
          break;
        v38 = v23;
        v36 = MEMORY[0x184FFD140](a1: v8, a2: v9, a3: v37, a4: v24, a5: v39, a6: (unsigned int)v23);
        sub_18159E420(a1: v19, a2: v20, a3: v36, a4: v18, a5: v21, a6: v22, a7: v35);
      }
      v40 = v23;
      v25 = v39;
    }
    v26 = v37;
    v27 = *(unsigned int *)(v37 + 4);
    if ( (_DWORD)v27 == 0 )
      goto LABEL_15;
    v28 = (unsigned int)(*(_DWORD *)(v4 + 8 * v27 + 8) >> *(_BYTE *)(v37 + 12));
    v39 = v25;
    v36 = MEMORY[0x184FFD140](a1: v8, a2: v9, a3: v37, a4: v37, a5: (unsigned int)v25, a6: v28);
    result = sub_18159E420(a1: v30, a2: v31, a3: v36, a4: v29, a5: v32, a6: v33, a7: v35);
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
LABEL_15:
  MEMORY[0x182771080](a1: v8, a2: v9, a3: v26, a4: v25);
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
  return sub_18159F840();
}
