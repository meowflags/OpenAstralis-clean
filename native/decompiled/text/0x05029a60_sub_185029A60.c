// sub_185029A60
// rva 0x05029a60  size 230  section .text  group text
// window base 0x185029a60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185029A60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+10h] [rbp-18h]
  __int64 v11; // [rsp+18h] [rbp-10h]
  int v12; // [rsp+20h] [rbp-8h]
  int v13; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    v13 = a1;
    v12 = a6;
    v11 = a5;
    v10 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a6 >= 0 )
  {
    if ( (int)a1 < 0 )
    {
LABEL_11:
      v13 = a1;
      v12 = a6;
      v11 = a5;
      v10 = a3;
      MEMORY[0x182770B00]();
      goto LABEL_12;
    }
    if ( a5 == v6 )
    {
LABEL_13:
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
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_185029B60();
    }
    if ( (int)a1 + a6 > *(_DWORD *)(a5 + 8) )
    {
LABEL_12:
      v13 = a1;
      v12 = a6;
      v11 = a5;
      v10 = a3;
      MEMORY[0x182770B00]();
      goto LABEL_13;
    }
    v10 = a3;
    if ( a5 == v6 )
      JUMPOUT(0x30A044AA7LL);
    v11 = a5;
    v12 = a6;
    v13 = a1;
    result = MEMORY[0x1828361E0](
               a1,
               a2,
               a3: a5 + (unsigned int)a6 + 12LL,
               a4: a5 + (unsigned int)a6 + 12LL,
               a5: (unsigned int)a1);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v13 = a1;
  v12 = a6;
  v11 = a5;
  v10 = a3;
  MEMORY[0x182770B00]();
  goto LABEL_11;
}
