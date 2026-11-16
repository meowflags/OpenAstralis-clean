// sub_18501F2A0
// rva 0x0501f2a0  size 377  section .text  group text
// window base 0x18501f2a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501F2A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v17; // r9
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+10h] [rbp-18h]
  __int64 v20; // [rsp+18h] [rbp-10h]
  unsigned int v21; // [rsp+20h] [rbp-8h]
  unsigned int v22; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v7 )
  {
    v20 = a3;
    v9 = *(_DWORD *)(a5 + 8) >> 1;
    v19 = a5;
    v22 = a6;
    v21 = v9;
    MEMORY[0x186329C40](a1: v7 + 376643464, a2, a3: 0, a4, a5: a6, a6: v9);
    if ( (int)v22 < 1 )
    {
      v17 = v22;
LABEL_12:
      if ( *(int *)(v8 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v12, a2: v13, a3: v10, a4: v11, a5: v14, a6: v17);
      return 1;
    }
    if ( v20 == v7 )
      goto LABEL_24;
    v11 = *(unsigned int *)(v20 + 8);
    if ( (_DWORD)v11 == 0 )
      goto LABEL_25;
    v10 = *(unsigned __int16 *)(v19 + 12);
    v14 = *(unsigned __int8 *)(v20 + 12);
    if ( (_DWORD)v14 == (_DWORD)v10 )
    {
      v6 = 1;
      v17 = v22;
      while ( (int)v22 > (int)v6 )
      {
        if ( (unsigned int)v11 <= (unsigned int)v6 )
          goto LABEL_26;
        v10 = *(unsigned __int16 *)(v19 + 2 * (int)v6 + 12);
        v14 = *(unsigned __int8 *)(v20 + v6 + 12);
        if ( (_DWORD)v14 != (_DWORD)v10 )
        {
          v15 = (unsigned int)v6;
          goto LABEL_8;
        }
        v6 = (unsigned int)(v6 + 1);
      }
      goto LABEL_12;
    }
    v15 = 0;
LABEL_8:
    if ( *(int *)(v8 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v12, a2: v13, a3: v15, a4: v11, a5: v14, a6: v22);
    return 0;
  }
  MEMORY[0x182771080]();
LABEL_24:
  MEMORY[0x182771080](a1: v12, a2: v13, a3: v10, a4: v11, a5: v14, a6: v22);
LABEL_25:
  MEMORY[0x182771220](a1: v12, a2: v13, a3: 0, a4: v11, a5: 0, a6: v22);
LABEL_26:
  MEMORY[0x182771220](a1: v12, a2: v13, a3: (unsigned int)v6, a4: v11, a5: (unsigned int)v11);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_18501F420();
}
