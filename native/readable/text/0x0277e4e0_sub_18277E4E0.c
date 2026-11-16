// sub_277E4E0
// rva 0x0277e4e0  size 313  section .text  group text
// window base 0x18277e4e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_277E4E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rdx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v3 + 8) )
  {
    sub_1EB83C0();
    goto LABEL_27;
  }
  if ( *(int *)(v3 + 336) < 1 )
  {
LABEL_27:
    sub_28C1C40(a1, a2, a3: v2 + 368616744);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_277E620();
    return;
  }
  v4 = *(_QWORD *)(v2 + 376178832);
  if ( v4 != 0 )
  {
    if ( v4 != v3 && *(_DWORD *)(v4 + 324) == 0 )
    {
      v7 = *(_DWORD *)(v4 + 16);
      if ( v7 < 0 )
      {
        v8 = -(v7 + 2);
        if ( v8 < 1 )
          JUMPOUT(0x304EC75F5LL);
        *(_DWORD *)(v4 + 16) = v8;
        __faststorefence();
      }
      if ( *(int *)(v4 + 332) < 1 )
      {
        *(_DWORD *)(v4 + 20) = 3;
        __faststorefence();
      }
    }
    v4 = *(_QWORD *)(v4 + 256);
    while ( v4 != 0 )
    {
      if ( v4 != v3 && *(_DWORD *)(v4 + 324) == 0 )
      {
        v5 = *(_DWORD *)(v4 + 16);
        if ( v5 < 0 )
        {
          v6 = -(v5 + 2);
          if ( v6 < 1 )
            JUMPOUT(0x304EC7592LL);
          *(_DWORD *)(v4 + 16) = v6;
          __faststorefence();
        }
        if ( *(int *)(v4 + 332) < 1 )
        {
          *(_DWORD *)(v4 + 20) = 3;
          __faststorefence();
        }
      }
      if ( *(int *)(v3 + 16) <= 0 )
        v4 = sub_277F280(a1, a2, a3: v4);
      else
        v4 = *(_QWORD *)(v4 + 256);
    }
  }
  if ( *(int *)(v3 + 16) <= 0 )
    sub_277F280(a1, a2, a3: v4);
}
