// sub_184F3B1C0
// rva 0x04f3b1c0  size 294  section .text  group text
// window base 0x184f3b1c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F3B1C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebp
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h]
  __int64 v14; // [rsp+18h] [rbp-20h]
  __int64 v15; // [rsp+20h] [rbp-18h]
  unsigned int v16; // [rsp+2Ch] [rbp-Ch]
  unsigned int v17; // [rsp+30h] [rbp-8h]
  unsigned int v18; // [rsp+34h] [rbp-4h]

  v15 = a2;
  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    v18 = a1;
    v17 = a6;
    v14 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a2 != v6 )
  {
    if ( (_DWORD)a5 != 0 )
    {
      v8 = a3;
      v18 = a1;
      v17 = a6;
      v14 = a3;
    }
    else if ( *(_BYTE *)(a2 + 12) == 1 )
    {
      v18 = a1;
      v16 = 0;
      v17 = a6;
      v14 = a3;
      v8 = sub_184F395A0(a1, a2, a3, a4, a5: a6);
      a2 = v15;
      a5 = v16;
    }
    else
    {
      v8 = a3;
      v18 = a1;
      v17 = a6;
      v14 = a3;
    }
    v9 = *(unsigned int *)(a2 + 4);
    if ( v8 != v14 )
      JUMPOUT(0x309E5120BLL);
    if ( (_DWORD)v9 == 0 )
      goto LABEL_15;
    v10 = *(_DWORD *)(v6 + 8 * v9 + 8) >> *(_BYTE *)(a2 + 12);
    v16 = a5;
    v13 = v8;
    MEMORY[0x184FF2DA0](a1: v18, a2: (unsigned int)a5, a3: a2, a4: v10, a5: v8, a6: 0);
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v13;
  }
  v18 = a1;
  v17 = a6;
  v14 = a3;
  MEMORY[0x182771080]();
LABEL_15:
  MEMORY[0x182771080](a1: v18, a2, a3: v14, a4: v9, a5, a6: v17);
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
  return sub_184F3B300();
}
