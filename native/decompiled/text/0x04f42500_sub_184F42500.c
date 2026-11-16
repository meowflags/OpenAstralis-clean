// sub_184F42500
// rva 0x04f42500  size 247  section .text  group text
// window base 0x184f42500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F42500(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+10h] [rbp-18h]
  unsigned int v15; // [rsp+1Ch] [rbp-Ch]
  __int64 v16; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v4 + 8) )
  {
    v16 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_11;
  }
  v5 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v5 == 0 )
  {
LABEL_11:
    v16 = a3;
    MEMORY[0x182771080]();
    goto LABEL_12;
  }
  v6 = *(_DWORD *)(v3 + 8 * v5) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v3
                                   + 8LL * *(unsigned int *)(v3 + 8 * v6 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v3 + 8 * v6 + 44) & (0x568u >> HIBYTE(*(_DWORD *)(v3 + 8 * v6 + 44))))
                                   + 12) != 1384 )
  {
LABEL_12:
    MEMORY[0x182770780]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F42600();
  }
  v7 = *(_QWORD *)(v4 + 40);
  v8 = v7 + 24;
  if ( (unsigned __int64)(v7 + 24) > *(_QWORD *)(v4 + 32) )
  {
    v15 = *(_DWORD *)(a3 + 4);
    v16 = a3;
    v7 = MEMORY[0x181EAA920](a1, a2, a3: 43286344);
    v5 = v15;
  }
  else
  {
    *(_QWORD *)(v4 + 40) = v8;
    *(_DWORD *)v7 = 43286344;
    *(_DWORD *)(v7 + 4) = 0;
    *(_QWORD *)(v7 + 8) = 0;
    *(_QWORD *)(v7 + 16) = 0;
    v16 = a3;
  }
  *(_DWORD *)(v7 + 4) = v5;
  v14 = v3 + 8 * v5;
  result = MEMORY[0x185968540](a1, a2, a3: v7, a4: v8, a5: 16);
  if ( *(int *)(v4 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v11, a2: v12, a3: v10, a4: v14);
  return result;
}
