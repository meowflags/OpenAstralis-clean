// sub_184F2A080
// rva 0x04f2a080  size 94  section .text  group text
// window base 0x184f2a080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2A080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // esi
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // [rsp+0h] [rbp-8h] BYREF

  result = a3;
  v10 = a5;
  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0](a1, a2, a3, a4: (unsigned int)a5);
LABEL_11:
    MEMORY[0x182771080]();
    goto LABEL_12;
  }
  if ( a5 >= 0 )
  {
    v11 = *(unsigned int *)(a3 + 16);
    if ( (_DWORD)v11 == 0 )
      goto LABEL_11;
    v12 = *(_DWORD *)(v7 + 8 * v11 + 8);
    if ( (int)v12 <= (int)v10 )
      goto LABEL_5;
    if ( v12 <= v10 )
    {
LABEL_12:
      MEMORY[0x182771220](a1, a2, a3: v10);
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_184F2A0E0(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17, a6: v18, a7);
    }
    *(_BYTE *)(v7 + 8 * v11 + v10 + 12) = 8;
  }
LABEL_5:
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
