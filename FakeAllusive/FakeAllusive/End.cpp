#include <iostream>
#include <Windows.h>
#include <string>
#include <tchar.h>
#include <TlHelp32.h>
#include <thread>
#include <string>
#include <chrono>
#include <thread>
#include <random>

#define wait(x) std::this_thread::sleep_for(std::chrono::milliseconds(x))

std::string generateRandomString(int length) noexcept // chat gpt made generate random string
{
    const std::string characters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    std::string randomString;

    for (int i = 0; i < length; ++i) {
        randomString += characters[rand() % characters.length()];
    }

    return randomString;
}

void updateConsoleTitle() noexcept // chat gpt made this as well
{
    while (true) {
        std::string randomTitle = generateRandomString(50);

        SetConsoleTitleA(randomTitle.c_str());

        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
}



DWORD getprocess(const wchar_t* proc) noexcept
{

    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

    if (hSnap == INVALID_HANDLE_VALUE)
    {
        return 0;
    }


    PROCESSENTRY32 pe32;
    pe32.dwSize = sizeof(PROCESSENTRY32);

    if (!Process32First(hSnap, &pe32))
    {
        CloseHandle(hSnap);
        return 0;
    }

    do
    {
        if (wcscmp(pe32.szExeFile, proc) == 0)
        {
            CloseHandle(hSnap);
            return pe32.th32ProcessID;
        }
    } while (Process32Next(hSnap, &pe32));

    CloseHandle(hSnap);


    return 0;
}


int main() noexcept
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::srand(static_cast<unsigned int>(std::time(0)));
    std::uniform_int_distribution<int> distribution(1, 1000);
    int randomNumber = distribution(mt);

    std::cout << "Illusion Is Sitting Waiting For Roblox!\n";
    SetConsoleTitle(L"Waiting For Roblox...");
    while (true)
    {
        if (getprocess(L"RobloxPlayerBeta.exe"))
        {
            std::cout << "Illusion Has Found Roblox Launcher.\n";
            break;
        }
        else
        {
            getprocess(L"RobloxPlayerBeta.exe");
        }
    }

    std::srand(static_cast<unsigned int>(std::time(nullptr)));



    std::cout << "Roblox PID: " << getprocess(L"RobloxPlayerBeta.exe") << "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    std::cout << "Grabbing Roblox Offsets Please Be Patient.\n";
    std::this_thread::sleep_for(std::chrono::seconds(6));
    std::cout << "\n\n";
    std::cout << "===============================\n\n";
    std::thread titleThread(updateConsoleTitle);
    std::uniform_int_distribution<int> distribution1(1, 10000000000);
    std::uniform_int_distribution<int> distribution2(1, 10000000000);
    std::uniform_int_distribution<int> distribution3(1, 10000000000);
    std::uniform_int_distribution<int> distribution4(1, 10000000000);
    std::uniform_int_distribution<int> distribution5(1, 10000000000);

    int fakeOffset1 = distribution1(mt);
    int fakeOffset2 = distribution2(mt);
    int fakeOffset3 = distribution3(mt);
    int fakeOffset4 = distribution4(mt);
    int fakeOffset5 = distribution5(mt);


    std::cout << "DataModel: 0x" << std::hex << fakeOffset1 << "\n";
    std::cout << "PlayerService: 0x" << std::hex << fakeOffset2 << "\n";
    std::cout << "LocalPlayer: 0x" << std::hex << fakeOffset3 << "\n";
    std::cout << "CoreGui: 0x" << std::hex << fakeOffset4 << "\n";
    std::cout << "ScriptContext: 0x" << std::hex << fakeOffset5 << "\n" << std::dec;
    std::cout << "Name: 1auta" << "\n";
    std::cout << "LocalPlayer Path: game:GetService('Players').1auta\n\n";

    HWND tarWin = FindWindow(nullptr, L"Roblox");
    SetWindowText(tarWin, L"Roblox - Illusion is fake and a exit scam xD");

    std::cout << "------------Looping Through Data Model------------\n\n";

    std::cout << "Run Service\n";
    wait(5);
    std::cout << "GuiService\n";
    wait(5);
    std::cout << "Stats\n";
    wait(5);
    std::cout << "TimerService\n";
    wait(5);
    std::cout << "SoundService\n";
    wait(5);
    std::cout << "VideoCaptureService\n";
    wait(5);
    std::cout << "NonReplicatedCSGDDictionaryService\n";
    std::cout << "CSDGDictionaryService\n";
    wait(5);
    std::cout << "LogService\n";
    std::cout << "ContentProvider\n";
    std::cout << "KeyframeSequenceProvider\n";
    wait(5);
    std::cout << "AnimationClipProvider\n";
    std::cout << "Chat\n";
    std::cout << "MarketplaceService\n";
    std::cout << "Players\n";
    std::cout << "CloneService\n";
    std::cout << "NotificationService\n";
    std::cout << "ReplicatedFirst\n";
    wait(5);
    std::cout << "HttpApiService\n";
    std::cout << "TweenService\n";
    std::cout << "MaterialService\n";
    std::cout << "TextChatService\n";
    std::cout << "TextService\n";
    std::cout << "PlayerEmulatorService\n";
    std::cout << "CorePackages\n";
    wait(5);
    std::cout << "StudioData\n";
    std::cout << "SharedTabledRegistry\n";
    std::cout << "StarterPlayer\n";
    std::cout << "StarterPack\n";
    std::cout << "StarterGui\n";
    std::cout << "CoreGui\n";
    wait(5);
    std::cout << "LocalizationService\n";
    std::cout << "PolicyService\n";
    std::cout << "UserInputService\n";
    std::cout << "Teleport Service\n";
    std::cout << "JointsService\n";
    std::cout << "Workspace\n";
    std::cout << "CollectionService\n";
    std::cout << "PhysicsService";
    std::cout << "BadgeService\n";
    std::cout << "GeometryService\n";
    wait(5);
    std::cout << "FriendService\n";
    std::cout << "InsertService\n";
    std::cout << "GamePassService\n";
    wait(5);
    std::cout << "CookiesService\n";
    std::cout << "KeyboardService\n";
    std::cout << "MouseService\n";
    std::cout << "VRService\n";
    std::cout << "ContextActionService\n";
    std::cout << "ScriptService\n";
    std::cout << "AssetService\n";
    std::cout << "TouchInputService\n";
    std::cout << "BrowserService\n";
    std::cout << "AppStorageService\n";
    std::cout << "AnalyticsService\n";
    std::cout << "Script Context\n";
    std::cout << "Lighting\n";
    std::cout << "FilteredSection\n";
    std::cout << "Selection\n";
    wait(5);
    std::cout << "ScriptRegistrationService\n";
    std::cout << "RuntimeScriptService\n";
    std::cout << "NetworkClient\n";
    std::cout << "HttpService\n";
    std::cout << "ChangeHistoryService\n";
    std::cout << "TextBoxService\n";
    std::cout << "GuidRegistryService\n";
    std::cout << "RtMessagingService\n";
    std::cout << "PermissionService\n";
    wait(5);
    std::cout << "AvatarChatService\n";
    std::cout << "Teams\n";
    std::cout << "RobloxReplicatedStorage\n";
    std::cout << "SpawnerService\n";
    std::cout << "FilteredSelection\n";
    std::cout << "FaceAnimationService\n";
    std::cout << "VoiceChatService\n";
    std::cout << "GamepadService\n";
    wait(5);
    std::cout << "MeshContentProvider\n";
    std::cout << "SolidModelContentProvider\n";
    std::cout << "HSRDataContentProvider\n";
    std::cout << "Instance\n";
    std::cout << "FilteredSelection\n";
    std::cout << "FilteredSelection\n";
    std::cout << "FilteredSelection\n";
    wait(5);
    std::cout << "FilteredSelection\n";
    std::cout << "ControllerService\n";
    std::cout << "TemporaryCageMeshProvider\n";
    std::cout << "HapticService\n";
    std::cout << "ProximityPromptService\n\n";
      


    std::cout << "Press any key to exit...";
    std::cin.get();

    return 0;
}