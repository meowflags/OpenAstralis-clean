// sub_181E91800
// rva 0x01e91800  size 806  section .text  group text
// window base 0x181e91800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E91800(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  _DWORD *v7; // rbp
  unsigned __int64 v8; // rcx
  _DWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // rdx
  __int64 v14; // [rsp+30h] [rbp-8h]

  v4 = v3 + 376654920;
  v5 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v5 != 0 )
  {
    v6 = *(_QWORD *)(a3 + 8);
    v7 = *(_DWORD **)(a3 + 16);
    if ( *(_QWORD *)(v3 + 8 * v5 + 24) != v6 )
    {
      if ( v6 != 0 )
      {
        while ( 1 )
        {
          v14 = v6;
          v9 = v7;
          while ( v6 + *(_QWORD *)(v6 + 32) > (unsigned __int64)v9 )
          {
            sub_181E95DA0(a1, a2: v9, a3: v4, a4: v6, a5: v9);
            v8 = *(unsigned int *)(v3 + 8LL * (*v9 >> 3) + 32);
            if ( (v8 & 0x80000000) != 0LL )
              v8 = (((unsigned __int64)(unsigned int)v9[2] << v8) + (((int)v8 >> 8) & 0xFFF) + 7) & 0xFFFFFFFFFFFFFFF8LL;
            v9 = (_DWORD *)((char *)v9 + v8);
            v6 = v14;
            v4 = v3 + 376654920;
          }
          v10 = *(_QWORD *)(v6 + 16);
          if ( v10 != 0 )
            v11 = v6 + v10;
          else
            v11 = 0;
          if ( v11 != 0 )
            v12 = (_DWORD *)(v11 + 2112);
          else
            v12 = nullptr;
          if ( v11 == 0 )
            JUMPOUT(0x181E91A94LL);
          v7 = v12;
          v6 = v11;
          v4 = v3 + 376654920;
        }
      }
      JUMPOUT(0x181E91A71LL);
    }
    JUMPOUT(0x181E91A54LL);
  }
  MEMORY[0x18276EFE0]();
  MEMORY[0x18276EFE0]();
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
  return sub_181E91B40();
}
