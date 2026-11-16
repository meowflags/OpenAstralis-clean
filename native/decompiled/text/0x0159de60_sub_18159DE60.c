// sub_18159DE60
// rva 0x0159de60  size 240  section .text  group text
// window base 0x18159de60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_18159DE60(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+10h] [rbp-18h]
  unsigned __int64 v18; // [rsp+18h] [rbp-10h]
  unsigned int v19; // [rsp+20h] [rbp-8h]
  unsigned int v20; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB83C0]();
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
    sub_18159DF60();
  }
  else
  {
    if ( a5 != 0 )
    {
      v20 = a1;
      v19 = a6;
      v18 = a5;
      v17 = v6 + 376612120;
      if ( (unsigned int)sub_18159C800(a1, a2, a3: v6 + 376613472, a4: v18, a5: v6 + 376612120, a6: v18) == 0 )
      {
        MEMORY[0x181E60200](a1: v19, a2: v20, a3: v6 + 376613728, a4: v8, a5: v17, a6: v18);
        if ( (unsigned int)MEMORY[0x1827836E0](a1: v10, a2: v11, a3: v17, a4: v9, a5: v18, a6: v20) == 0
          && (unsigned int)MEMORY[0x181E9B5E0](a1: v19, a2: v20, a3: v6 + 376613784, a4: v12, a5: v17, a6: v18) == 0 )
        {
          MEMORY[0x182084840](a1: v14, a2: v15, a3: v17, a4: v13, a5: v6 + 360716848);
        }
      }
    }
    else
    {
      v20 = a1;
      v19 = a6;
      v18 = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
  }
}
