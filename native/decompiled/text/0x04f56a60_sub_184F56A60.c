// sub_184F56A60
// rva 0x04f56a60  size 265  section .text  group text
// window base 0x184f56a60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F56A60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-8h] BYREF

  v8 = a5;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0](a1, a2, a3, a4: a5);
    goto LABEL_15;
  }
  v9 = (unsigned int)(a6 - 2);
  if ( (unsigned int)v9 < 0x23 )
  {
    v12 = *(unsigned __int16 *)(v6 + 2LL * ((unsigned __int16)a5 >> 5) + 377198516) | ((unsigned __int16)a5 >> 1) & 0xFu;
    if ( (unsigned int)v12 < 0x40 )
    {
      v13 = *(unsigned __int16 *)(v6 + 2 * v12 + 377202628) | (unsigned int)(v8 & 1);
      if ( (unsigned int)v13 < 6 )
      {
        v9 = *(unsigned int *)(v6 + 4 * v13 + 377202772);
        v10 = ((_BYTE)v8 + ((unsigned __int16)(v9 & 0x3E0) >> 5)) & 0x1F;
        if ( (v9 & 0x1F) != 9 )
        {
          v9 &= 0xC00u;
          if ( (_DWORD)v9 == 3072 )
          {
            v9 = (unsigned int)(v10 + 10);
            v10 = v9;
          }
          else
          {
            v10 = 0xFFFFFFFFLL;
          }
        }
        goto LABEL_4;
      }
LABEL_16:
      MEMORY[0x182771220](a1, a2, a3: v13, a4: v8, a5: 6);
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
      return sub_184F56B80();
    }
LABEL_15:
    MEMORY[0x182771220](a1, a2, a3: (unsigned int)v12, a4: v8, a5: 64);
    goto LABEL_16;
  }
  v10 = 0xFFFFFFFFLL;
LABEL_4:
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280](a1, a2, a3: v9, a4: v8, a5: v10);
  if ( a6 <= (int)v10 )
    JUMPOUT(0x309E6CAA2LL);
  return (unsigned int)v10;
}
