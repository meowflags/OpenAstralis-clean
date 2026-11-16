// sub_181E9AB20
// rva 0x01e9ab20  size 261  section .text  group text
// window base 0x181e9ab20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181E9AB20(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  signed __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 result; // rax
  __int64 v8; // [rsp+10h] [rbp-8h]

  *(_BYTE *)(v2 + 376613820) = 1;
  if ( *(__int64 *)(v2 + 376612160) < 2048 )
    JUMPOUT(0x303D24B43LL);
  v3 = *(_QWORD *)(v2 + 376612160);
  if ( v3 > 0x7F7C0 )
    JUMPOUT(0x303D24B53LL);
  v4 = (v3 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(v2 + 376656344) = v4;
  v5 = *(_QWORD *)(v2 + 376612168);
  if ( v5 != 0 )
  {
    if ( (__int64)v4 > v5 )
      JUMPOUT(0x303D24B79LL);
    if ( *(_QWORD *)(v2 + 376612168) > 0x7F7C0u )
      JUMPOUT(0x303D24B89LL);
    v6 = *(_QWORD *)(v2 + 376612168);
  }
  else
  {
    if ( v4 < 0x2000 )
      JUMPOUT(0x303D24BEALL);
    v6 = v4;
    if ( v4 > 0x7F7C0 )
      JUMPOUT(0x303D24BFALL);
  }
  *(_QWORD *)(v2 + 376656352) = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(v2 + 376178848) = 50;
  v8 = v2 + 376654936;
  *(_DWORD *)(v2 + 376654972) = (unsigned __int64)(MEMORY[0x181E80520](a1, a2, a3: v2 + 376656784) - v2) >> 3;
  result = v2 + 376654936;
  if ( (*(_DWORD *)(v2 + 376654936) & 2) != 0 )
  {
    result = (v8 - ((v8 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
    if ( *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - ((v8 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
  }
  return result;
}
